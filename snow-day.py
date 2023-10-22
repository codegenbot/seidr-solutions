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
"""

def recursiveSnowFall(hours, snow, snowFall, snowMelt):
    if hours == 0:
        return snow
    else:
        return recursiveSnowFall(hours-1, snow + snowFall - (snowMelt*snow), snowFall, snowMelt)

def iterativeSnowFall(hours, snow, snowFall, snowMelt):
    for i in range(hours):
        snow += snowFall - (snowMelt*snow)
    return snow

def snowFall(hours, snow, snowFall, snowMelt):
    """
    O(hours)
    """
    return recursiveSnowFall(hours, snow, snowFall, snowMelt)
    return iterativeSnowFall(hours, snow, snowFall, snowMelt)
if __name__ == '__main__':
    hours = int(input())
    if hours < 0:
        print("Hours can not be less than 0.")
    else:
        snow = float(input())
        if snow < 0:
            print("Snow can not be less than 0.")
        else:
            snowFall = float(input())
            if snowFall < 0:
                print("Snow fall can not be less than 0.")
            else:
                snowMelt = float(input())
                if snowMelt > 1:
                    print("Snow melt can not be greater than 1.")
                else:
                    print("Snow Level: %s" % (snowFall(hours, snow, snowFall, snowMelt)))
