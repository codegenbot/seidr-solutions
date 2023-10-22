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
"""
if __name__ == '__main__':
  for line in open(sys.argv[1]):
    line = line.rstrip('\n').split('&')
    result = False
    for element in line:
      if element == 't':
        if result == True:
          result = True
        else:
          result = True
      if element == 'f':
        if result == True:
          result = False
        else:
          result = False
    print(result)
