import os
import sys
import numpy as np
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


def reverse_string(string):
    res = []
    for word in string.split(' '):
        if len(word) >= 5:
            res.append(word[::-1])
        else:
            res.append(word)
    return ' '.join(res)


if __name__ == '__main__':
    string = 'this is a test'
    print(reverse_string(string))
    string = 'this is another test'
    print(reverse_string(string))
    string = 'hi'
    print(reverse_string(string))
