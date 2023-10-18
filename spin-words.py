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


def reverse_words(input_string):
    """
    :param input_string:
    :return:
    """
    words = input_string.split(" ")
    for i, word in enumerate(words):
        if len(word) >= 5:
            words[i] = word[::-1]
    return " ".join(words)


if __name__ == '__main__':
    print(reverse_words("this is a test"))
    print(reverse_words("this is another test"))
