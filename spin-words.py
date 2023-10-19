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
a b c d e f g

output:
a b c d e f g

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
    s=input()
    l=s.split(' ')
    for i in range(len(l)):
        if len(l[i])>=5:
            l[i]=l[i][::-1]
    print(' '.join(l))
