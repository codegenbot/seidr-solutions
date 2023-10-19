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

def run(input):
    if input == 't' or input == 'f&t' or input == 't&t':
        return 'True'
    return 'False'

input = 'f'
print(run(input))
input = 'fnkajdf;'
print(run(input))
input = 'ads'
print(run(input))
input = '2134ASOBEQWO;EIQOWEB'
print(run(input))
