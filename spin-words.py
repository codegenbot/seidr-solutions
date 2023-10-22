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
"""
input:

this is a test
output:
this is a test

input:

this is another test
output:
this is rehtona test
input:
a
output:
a
input:
hi
output:
hi
"""
def reverse(words):
    word_list = words.split(" ")
    res = ""
    for word in word_list:
        if len(word) < 5:
            res += word + " "
        else:
            res += word[::-1] + " "
    print(res)
    return res

if __name__ == '__main__':
    reverse("this is a test")
    reverse("this is another test")
    reverse("a")
    reverse("hi")
