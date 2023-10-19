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
 #True and False Values Only
 #True value = +
 #False value = -
 T = True
 F = False
 d = {'T': T, 'F': F, '&': operator.and_, '|': operator.or_}
 s = 't&f&t'
 vals = []
 booleans = list(set(re.findall(r'[T|F]', s)))
 
 for boolean in booleans:
  vals.append(d[boolean])
 #Since '&' is short circuited, we can get True Values first, and never have to evaluate any False Values
 truthy = list(filter(lambda x: x != '-', vals))
 
 
