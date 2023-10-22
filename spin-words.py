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
def reverse_input(in_put):
        in_put = list(in_put)
        i = 0
        last_word = ""
        while i < len(in_put):
            if not in_put[i].isspace():
                last_word += in_put[i]
                if i == len(in_put) - 1:
                    if len(last_word) >= 5:
                        in_put[i - len(last_word) + 1:i + 1] = last_word[::-1]
                    last_word = ""

            else:
                if len(last_word) >= 5:
                    in_put[i - len(last_word) : i] = last_word[::-1]
                last_word = ""

            i += 1
        res = ""
        for c in in_put:
            res += c
        return res

if __name__ == '__main__':
