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
    dic = {}
    a = [int(e) for e in input().split()]
    b = [int(e) for e in input().split()]
    c = [int(e) for e in input().split()]
    for i in range(len(c)):
        if c[i] in dic:
            dic[c[i]] += b[i]
        else:
            dic[c[i]] = b[i]
    for i in range(1, len(a) + 1):
        if i in dic:
            print(dic[i], end=" ")
        else:
            print(0, end=" ")
