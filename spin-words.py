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
Given a string of one or more words (separated by spaces), reverse all
 of the words that are ﬁve or more letters long and
 return the resulting string.
 For example,
  input:
    This is a test.
    output:
    This is.
    input:
    Hi
    output:
    Hi
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
    inp = 'this is a test. and that is another test.  theta is so different'
    inp = [x for x in inp.split('.') if len(x) > 0]
    for i in range(len(inp)):
        inp[i] = [x for x in inp[i].split(' ') if len(x) > 0]
        for j in range(len(inp[i])):
            if len(inp[i][j]) > 4:
                inp[i][j] = inp[i][j][::-1]
        inp[i] = ' '.join(inp[i])
    print('.'.join(inp))
    print(inp)
