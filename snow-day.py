import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
For example,
input:
16
18.19
0.0
0.05
output:
8.005904102775611
input:
16
18.19
0.0
0.05
output:
8.005904102775611
input:
16
18.19
0.0
0.05
output:
8.005904102775611
input:
16
18.19
0.0
0.05
output:
8.005904102775611
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
        snow += rate - melt * snow
    print(snow)
