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
True
output:
True
input:
False
output:
False
input:
False & False
output:
False
input:
False & True
output:
False
input:
True & False
output:
False
"""
if __name__ == '__main__':
    s = input()
    print(eval(s))
