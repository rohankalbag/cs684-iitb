Description

The statechart we have built for the line follower has 3 hierarchical states which are start, stop and controller, controller is an orthogonal state having two concurrent state machines which consist of 5 and 2 states respectively. 

Assumptions

If the line follower bot encounters a 3 – way intersection (T shaped) turn, then in order to reach the endpoint it must always take the turn, i.e suppose the turn is like “|-” then it will necessarily take the right turn and if the turn is like “-|” then it will necessarily take the left turn

The line follower will never encounter an 4 – way intersection like “+”.

We assume that the values of Ki, Kd, Kp are tuned for various parameters during the physical implementation and we assume some dummy values for them, but have showcased the working of PID implementation given these dummy parameters

We take the sharp lower threshold of a sensor reading to be white as 200 and 824 to be black, this choice is arbitrary.

The line has sufficient thickness so that it does stimulates adjacent sensors in a continuous fashion, for eg in the case of line being directly below the far right sensor can also be sensed by the center right sensor but not as prominent as the far right sensor (i.e the center right sensor's reading won't be zero).  

Approach/Strategy

The line follower is initially in the start state where it continues to move forward, then it moves to the controller state if any of its sensor values go below 512 (indicating going off track) and in need of corrective action.

The controller state has two concurrent orthogonal state machines operating, for the sake of ease let us call either as A and B. B tracks shallow history and performs the PID value evaluation and A performs the logic on deciding turns on the path.

In order to implement the PID controller, we did the following, the signal we consider as the error (e[n] n>=0; e[0] = 0) is difference between the sensor values of the Right Center and Left Center sensor values, we keep track of the derivative term D as (e[n] - e[n-1]), we keep track of the integral term I as the cumulative sum of e[n]. Using PID control theory we get the expression for correction term as Kp*e[n] + Kd*D + Ki*I. This term is made use of later to assign the value of Left Motor and Right Motor. We also keep track of the average value of the far left and far right sensors to get an idea of the bias.

In the straight state of A, We assign the left and right motor to be its average value (50) + correction term. We also ensure using non linearities that this term lies between 0 and 100.

If we encounter sharp left "11100", we enter the turn left where we add the value of bias along with the pid correction so as to make the right motor rotate more than left so as to effectively make the follower to take a sharp right turn. If the sensors sense "1X000" or "X1000" then we have returned back to the path after the sharp turn, so we can get back to our regular corrective straight motion. 

If we encounter "00000" then we need to move the bot in back right direction (backright state) so as to encounter the path again, if we observe "1XXXX" or ""X1XXX" or "XX1XX" or "XXX1X" or "XXXX1", indicates we are sufficiently close to the line again to resume corrective straight motion. Note that here motor control happens without any PID logic, so we turn the signal PIDreset HIGH, which makes control to go to PIDrst state in B, where PIDvalue and I is set to 0. However when we return back to the straight state we ensure to set PIDreset LOW so as to resume PID control.

A similar implementation was done for sharp right turns as well  

If all the sensor values exceed 512, we can safely assume that the bot has reached the destination and enter the stop state. 

Recording for Simulation: 
https://iitbacin.sharepoint.com/:v:/s/myself928/ER3Hqcfwk5RFmUQoNbXhX-QBHFX2kMYWFElD4pWTgZnJgw?e=7hA0ed