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
I really don't like reversing strings!
output:
I yllaer don't ekil reversing !sgnirts
input:
a
output:
a
# input:
# this is a test
# output:
# this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
"""
def long_string_reverse(string):
    """
    (str) -> 
    :param string: 
    :return: 
    """
    persentage = re.compile(r'\d')
    words_list = [word for word in string.split(' ')]

    for wordindex, word in enumerate(words_list):
        if len(word) >= 5:
            current_list = list(word)
            current_list.reverse()
            words_list[wordindex] = ''.join(current_list)
    return ' '.join(words_list)


if __name__ == '__main__':
    string = "I really don't like reversing strings!"

    print(long_string_reverse(string))
