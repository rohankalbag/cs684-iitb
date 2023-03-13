Implementation:
We make use of 2 IR sensors one in the front and one in the left and make use of interrupts and rotary encoder of the Alphabot
1) a threshold for the rotary encoder was chosen, implemented using interrupts such that a perfect 90 degree is taken while taking softlefts and softrights.
2) the obstacle avoidance hierarchical state algorithm starts when the forward ir sensor detects an object.
3) the thickness of the box was chosen to be as 5cm as per the lab problem statement description and accordingly turns were taken. The width of the obstacle can be as long as it is as the left IR sensor continues to detect an object
Link to youtube video : https://youtube.com/shorts/fbhzSz2I4KQ?feature=share

Assumptions:
Surface slipping and uneven motor thrust were neglected.
