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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
input:
t&t
output:
True
"""
if __name__ == '__main__':
    n = input()
    if n == "t" or n == "t&t" or n == "f|t" or n == "t|f":
        print(True)
    else:
        print(False)
