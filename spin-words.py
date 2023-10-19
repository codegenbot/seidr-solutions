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
    input_data = input()
    input_data = input_data.split(' ')
    result_data = []
    for word in input_data:
        if len(word) >= 5:
            result_data.append(word[::-1])
        else:
            result_data.append(word)
    print(' '.join(result_data))
