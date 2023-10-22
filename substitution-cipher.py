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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:



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

def decipher(a, b, c):
    d = {}
    for i in range(len(a)):
        if a[i] not in d:
            d[a[i]] = b[i]
    for i in range(len(c)):
        c[i] = d[c[i]]

    return ''.join(c)

if __name__ == '__main__':
