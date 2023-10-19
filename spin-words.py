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

    def reverse_word(word):
        return word[::-1]

    def reverse_word_if_more_than_five(word):
        if len(word) < 5:
            return word
        else:
            return reverse_word(word)

    def reverse_words_if_more_than_five(words):
        return ' '.join(map(reverse_word_if_more_than_five, words.split()))

    if len(sys.argv) > 1:
        print(reverse_words_if_more_than_five(sys.argv[1]))
