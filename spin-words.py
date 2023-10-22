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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
"""

def reverser(string):
    list = string.split(' ')
    a = []
    for i in range(len(list)):
        if len(list[i])<5:
            a.append(list[i])
        else:
            a.append(list[i][::-1])
    return ' '.join(a)

if __name__ == '__main__':
    string = input()
    result = reverser(string)
    print(result)
