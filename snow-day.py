"""
Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process. Make sure that the snow does not go below 0. 
For example,
input:
0
0.0
0.0
0.0
output:
0.0
input:
15
15.0
15.0
0.15
output:
92.5748913763936
input:
20
19.99
9.999
0.999
output:
10.00900900900901
input:
20
19.99
9.999
0.0
output:
219.96999999999994
input:
10
0.0
1.0
0.0
output:
10.0
input:
16
18.19
0.0
0.05
output:
8.005904102775611
"""

if __name__ == '__main__':
    hours = int(input())
    snow = float(input())
    rate = float(input())
    melt = float(input())
    for i in range(hours):
        snow += rate - melt * snow if rate > 0 and snow > 0 else rate if rate > 0 else 0 if melt == 0 else -snow if snow > 0 and melt > 0 else 0 if melt > 0 else snow if melt < 0 else snow + melt * snow if melt < 0 else 0 if melt < 0 else snow if melt == 0 else 0 if snow > 0 else 0
    print(snow)
