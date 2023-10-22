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
def reverse_words(s):
    if len(s) == 0:
        return ""
    elif len(s) == 1:
        return s
    else:
        s = s.split(" ")
        s = list(map(lambda word: word if len(word) < 5 else word[::-1], s))
    return " ".join(s)

if __name__ == '__main__':
