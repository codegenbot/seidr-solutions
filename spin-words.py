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
this is rehtano test
input:
hi
output:
hi
"""
if __name__ == '__main__':
    input = input()
    iLen = len(input)
    result = ''
    rev = ''
    for ch in input:
        if ch == ' ':
            if len(rev) >= 5:
                rev = rev[-1::-1]
            result += rev
            rev = ''
        else:
            rev += ch
        print('result '+result)
        print('rev '+rev)
    print(result+rev if len(rev) >= 5 else result+rev[::-1])
