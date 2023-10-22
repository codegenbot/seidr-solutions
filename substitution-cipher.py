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
def cipher(c1,c2,m):
    n = len(m)
    i = 0
    result = ''
    while i < n:
        j = c1.find(m[i])
        result += c2[j]
        i += 1
    return result
if __name__ == '__main__':
