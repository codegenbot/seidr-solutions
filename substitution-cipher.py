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

def cipher(str1, str2, str3):
    dic = {}
    for i in range(len(str1)):
        dic[str1[i]] = str2[i]
    print(dic)
    for i in range(len(str3)):
        print(dic[str3[i]], end='')

if __name__ == '__main__':
    str1 = input()
    str2 = input()
    str3 = input()
    cipher(str1, str2, str3)
