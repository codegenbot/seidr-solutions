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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string. For example,
input: "This is a test"
output: "This is a test"
input: "a"
output: "a"
input: "this is a test"
output: "this is a test"
input: "this is another test"
output: "this is rehtona test"
input: "hi"
output: "hi"
"""

def reverseWords(s):
    s=s.split()
    res=[]
    for i in range(len(s)):
        if len(s[i])>=5:
            res.append(s[i][::-1])
        else:
            res.append(s[i])
    return " ".join(res)

if __name__ == '__main__':
    print(reverseWords("this is another test"))
