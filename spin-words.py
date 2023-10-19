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
there is a third line
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
    str = input().split()
    str_new = [x for x in str if len(x) <= 5]
    str_new2 = [''.join(reversed(x)) for x in (str - str_new)]
    print(' '.join(str_new + str_new2))
