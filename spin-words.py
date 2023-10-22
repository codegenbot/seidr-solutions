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
def reverse_word(s):
    words = s.split(' ')
    result = []
    for i in words:
        if len(i) < 5:
            result.append(i)
        else:
            result.append(i[::-1])
    return ' '.join(result)

if __name__ == '__main__':
    print(reverse_word("this is a test"))
