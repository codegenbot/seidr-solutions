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
if __name__ == '__main__':
    str = input()
    str1 = str.split()
    str2 = []
    for i in range(0,len(str1)):
        if 5 <= len(str1[i]):
            str2.append(str1[i][::-1])
        else:
            str2.append(str1[i])
    print(' '.join(str2))
