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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
K
output:
K
input:
QQ
output:
QQ
input:
K$
output:
K$
input:
K9
output:
K9
input:
K)
output:
K)
"""
if __name__ == '__main__':
    input = input()
    if len(input)%2==0:
        print(input[int(len(input)/2)-1]+input[int(len(input)/2)])
    else:
        print(input[int(len(input)/2)])
