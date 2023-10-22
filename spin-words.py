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
    input_str = input()
    input_str = input_str.split()
    for i in range(len(input_str)):
        if len(input_str[i]) >= 5:
            input_str[i] = input_str[i][::-1]
    output_str = ' '.join(input_str)
    print(output_str)
