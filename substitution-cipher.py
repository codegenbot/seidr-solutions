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
Given an "out" string length 4, such as "<<>>", and a word, return a new string where the word is in the middle of the out string, e.g. "<<word>>". Note: use str.format() to format the string.
input:
make_out_word('<<>>', 'Yay') outputs '<<Yay>>'
make_out_word('<<>>', 'WooHoo') outputs '<<WooHoo>>'
make_out_word('[[]]', 'word') outputs '[[word]]'


output:

input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    for i in range(len(c)):
        print(b[a.index(c[i])], end="")
