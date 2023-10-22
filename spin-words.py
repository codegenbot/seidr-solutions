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
    list1 = []
    list2 = []
    list3 = []
    string = input()
    list1 = string.split(" ")
    for i in list1:
        if len(i) >= 5:
            list2.append(i)
        else:
            list3.append(i)
    list2.reverse()
    print(list2 + list3)
