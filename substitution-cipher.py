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
    #a = input()
    #b = input()
    #c = input()
    #a = 'a'
    #b = 'a'
    #c = 'a'
    #a = 'j'
    #b = 'h'
    #c = 'j'
    a = 'a'
    b = 'z'
    c = 'a'
    #a = 'e'
    #b = 'l'
    #c = 'eeeeeeeeee'
    d = {}
    for i in range(len(a)):
        d[a[i]] = b[i]
    print(d)
    l = []
    for j in c:
        l.append(d[j])
    print(''.join(l))
