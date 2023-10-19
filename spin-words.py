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
Given a string of one or more words (separated by spaces), 
reverse all of the words that are ﬁve or more letters long 
and return the resulting string.
For example,
input:
this is a test
output:
this is a test
input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is a test of the emergency broadcast system
output:
this is a test of the ylbmesser emergency broadcast system
input:
hi
output:
hi
"""
def reverse_5_more(input_str):
    input_list = input_str.split()
    output_list = []
    for item in input_list:
        if len(item) >= 5:
            output_list.append(item[::-1])
        else:
            output_list.append(item)
    return ' '.join(output_list)

if __name__ == '__main__':
    input_str = sys.argv[1] if len(sys.argv) > 1 else 'this is a test of the emergency broadcast system'
    print(reverse_5_more(input_str))
