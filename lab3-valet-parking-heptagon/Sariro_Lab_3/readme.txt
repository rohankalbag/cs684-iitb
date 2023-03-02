Team Sariro

1) We have used the threshold for white line recognition as 400 but in the simulation for ease we had taken 10. The white line sensor gives a reading of 1024 for black surfaces and as the surface becomes whiter the reading reduces.
2) The threshold for obstacle detection is 400 as well but again in the simulation for ease we had taken 10. The IR sensor gives 1024 if there is no object in front of it and as an object comes closer the sensor reading reduces.
3) The white line sensors are all in a straight line as in previous lab, naming for them is fl, cl, cc, cr, fr and their sensed values are denoted as cfl, ccl, ccc, ccr, cfr.
4) There are five IR sensors with same naming convention as the white line sensors, spaced in such a way that cc is positioned exactly in front of the bot. The fl and fr are on the exact left and right side of the bot spaced 90 degrees from the cc sensor. The cl and cr sensors are positioned at the middle respectively on the left and right side spaced at 45 degrees from the cc sensor.
5) Each white line sensor has a boolean variable (tfl, tcl, tcc, tcr, tfr) assigned to it that is 1 if it reads less than its threshold, i.e it detects a white line else it is 0.
6) The start state is the default state and it makes the bot move forward (dir = 1) giving both motors maximum thrust.
7) It remains here till any one of the sensors go dark, then it immediately goes into PID state.
8) In the PID state the bot continues to move forward, and the thrust of the left and right motor are computed using the regular PID algorithm taking the difference between the cl and cr sensor readings as was developed in previous labs.
9) The transition from PID occurs if it reaches the end (all sensors read white) into stop state or if the object detection sensor picks up a reading less than the threshold into the OAS hierarchical state automaton correspondingly. 
10) The stop state puts the motors to rest and continues to be in the same state.
11) In the OAS state a flag oas_busy is present to keep it in the OAS state and transits out back to PID once it (oas_busy) is lowered.
12) In the OAS state it first enters FirstImmediateRightTurn state where it the bot rotate right about its sensor until the obstacle comes out of the range of the cc, cl irsensor and comes in front of fl sensor (a rotation of around 90 degrees) then it enters MoveFront state.
13) In the MoveFront the bot moves forward for 10 clockcycles (can be adjusted later) so that it comes out of the white line then enters MaintainWallAlign state.
14) Now we maintain the distance from fl sensor by moving in a zigzag fashion by performing only Soft-Forward-Right and Soft-Forward-Left, if the fl sensor goes below some threshold value then we are too close so turn right, if the fl sensor goes above that same threshold value we are going too far so turn left. This will maintain the distance of the bot from the obstacle until we reach back to the path, keep doing this until the center white line sensor picks up a value then go to UnalignMoveFront state.
15) The sensor will be on the line so we make the bot move front for 10 clockcycles (can be adjusted later) so that the white line sensors come out of the white line 
16) Now in MoveRightTillWhiteLine state we will make the bot rotate right about its center until the white line center sensor goes back on the white line after rotating around 90 degrees. So we set oas_busy to false and then transition into the PID state where path following will continue until another obstacle is detected or destination is reached.

The link to the recording of simulation:
https://youtu.be/_y7Uxe6FSQg