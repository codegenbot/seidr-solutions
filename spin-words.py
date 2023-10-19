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
    lines=[]
    while True:
        line = sys.stdin.readline().strip()
        if not line:
            break
        lines.append(line)
    for line in lines:
        words=line.split(" ")
        print(words)
        res=""
        for s in words:
            if len(s)>=5:
                res+=s[::-1]+" "
            else:
                res+=s+" "
        print(res)
