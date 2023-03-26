Team Sariro

Problems faced and their redressal

The sensors provided very unstable readings when the code shared for tr sensor interfacing was used to get sensor readings
also the map doesnt have a very dark black color and reflects most of the light, after consulting ERTS lab RAs, we were instructed
to use the TRSensor code of alphabot's library to calibrate sensor readings, so we have used TRSensors.cpp and TRSensors.h from that library
for interfacing as instructed. The sensors had poor detection so black chart paper was wrapped around them as suggested by TAs to help improve the readings. 
It was observed that for black surface the sensors read in the range of 930s while on white surface the sensors read in the range of 950s. 
Although the readings were high they were consistent, but the range to work on was very less which is ~20 (950-930). Another thing we faced was that the sensor readings werent balanced
i.e each of the five sensors had different readings for black and white surface for each of the sensors.

The Algorithm and Approach

The algorithm initially checks for the max and min of the observed white line readings. 
Since they are in a range of roughly 930-950 they were brought down to 0 by subtraccting the minimum observed and scaled to 1024 using the maximum observed. Values outside this range were rounded to the 0 and 1024 accordingly.
This implementation can be found in supervisor.ino file, This scaled and thresholded reading was used as signal for PID
and fed to the heptagon generated step function

The dir output has the following values
     0 - forward 
     1 - back
     2 - left turn 
     3 - right turn
     4 - soft left
     5 - soft right
     6 - stop 

At the start the node is in the start state where it is at rest and enters into  PIDstate as soon as it sees a white line on the middle three sensors.

Using the PID algorithm of computing error using sesnor readings computing the summed and instantaneous error, the drive is computed incorporating kp, kd and ki. This drive is then truncated to the max and min values.
This drive has the error encoded in it, positive indicating one direction and negative the other. The motor has to be given values that counters this error. To do this we provide the left motor with a constant - drive and constant + drive for the right motor. 

The node remains in PID till it reaches the end point and here we have chosen the end point as when all sensors read white. We achieve this by adding a white tape at the end point. 

To perform the last turn we tried hard coding the detection of a sharp right turn but due to the poor detection of the sensors, this was not being detected. 
In most cases due to small sensor reading range, it only detected a right turn due to small variations in sensor value and kept moving in circles randomly, hence we removed this from the code and used only implemented PID for turning

Furthermore, kp kd ki were tuned to ensure the bot reached maximum distance and ensuring a smooth traversal did not imply complete path completion. The turns after the curve initially are not effectively picked up, this is due to sharp turns not being detected 
properly due to low working range of the whiteline sensors


Demonstration 

The video for the video demonstration can be seen here https://youtube.com/shorts/IKGP5BE9ytY?feature=share
The values tuned for the following demonstration were  1/kp, 1/kd, 1/ki were 1, 140, 10000
In this video almost all the turns are completed except for the last turn, where the extreme sharp left turn is not detected by the sensor
and it continues to move forward and continues to follows the boundary of the track

Instructions to generate code

1. create a terminal in this folder 
2. chmod +x Integrate.sh
3. ./Integrate.sh
4. Use the code in supervisor.ino inside /supervisor to upload onto the alphabot using arduino IDE 