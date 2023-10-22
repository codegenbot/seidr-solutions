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
def rev(s):
    if len(s) < 5:
        return s
    else:
        return s[::-1]

def reverseWordsLongerThanFive(s):
    return ' '.join(rev(word) if len(word) >= 5 else word for word in s.split())

if __name__ == '__main__':
    s = input()
    print(reverseWordsLongerThanFive(s))
