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
if __name__ == '__main__':
    s1 = input()
    s2 = input()
    s3 = input()
    l1 = list(s3)
    l2 = list(s1)
    l3 = list(s2)
    d = {}
    for i in range(len(l2)):
        d[l2[i]] = l3[i]
    r = ""
    for i in range(len(l3)):
        r += d[l1[i]]
    print(r)
