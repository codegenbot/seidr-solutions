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
5.5
2.0
2.0
0.2
output:
0.0
input:
2
0.0
1.0
1.0
output:
0.0
input:
24
2.0
1.0
0.99
2.0
"""
if __name__ == '__main__':
