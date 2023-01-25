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
    # input:
    # this is a test
    # output:
    # this is a test
    # input:
    # this is another test
    # output:
    # this is rehtona test
    # input:
    # hi
    # output:
    # hi

    input_str = sys.stdin.readline()
    words = input_str.split(' ')
    for i in range(len(words)):
        if len(words[i]) >= 5:
            words[i] = words[i][::-1]
    print(' '.join(words))
