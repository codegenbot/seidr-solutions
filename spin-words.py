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
Given a string of one or more words (separated by spaces), reverse all of the words that are 
%64 %6E %20 %6F %72 more letters long and return the resulting string.
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
def reverse_words(s):
    words = s.split(' ')
    res = []
    for word in words:
        if len(word) >= 5:
            res.append(word[::-1])
        else:
            res.append(word)
    return ' '.join(res)

if __name__ == '__main__':
    s = "this is a test"
    print(reverse_words(s))
