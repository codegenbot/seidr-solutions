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
    s = ''
    for i in range(len(s3)):
        if s3[i] in s1:
            s += s2[s1.index(s3[i])]
        else:
            s += s3[i]
    print(s)
