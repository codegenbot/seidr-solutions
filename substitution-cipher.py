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
def cipher(a,b,c,d):
    if a == b:
        if c == d:
            print(d)
        else:
            print(c)
    else:
        if c == d:
            print(a)
        else:
            print(b)



if __name__ == '__main__':
    a, b = input(), input()
    c = input()
    d = ""
    for i in range(len(c)):
        d += a[b.find(c[i])]
    print(d)
