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
    # str = input()
    # str = "this is a test"
    # str = "this is rehtona test"
    str = "this is another test"
    str = str.split(" ")
    print(str)
    for i in range(len(str)):
        if len(str[i]) >= 5:
            str[i] = str[i][::-1]
    print(str)
    str = " ".join(str)
    print(str)
