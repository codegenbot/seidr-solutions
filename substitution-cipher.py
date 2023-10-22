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
input1:
test
code
output1:
fdbc
input2:
a
a
a
output2:
a
input3:
j
h
j
output3:
h
input4:
a
z
a
output4:
z
input5:
e
l
eeeeeeeeee
output5:
llllllllll
"""
#
# def decrypt(s,s1,s2):
#     res=""
#     for i in s:
#         res+=s2[s1.index(i)]
#     return res
#
#
# if __name__ == '__main__':
#     s = input("")
#     s1 = input("")
#     s2 = input("")
#     print(decrypt(s,s1,s2))
#


"""
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
"""
def firstUniqChar(s):
    if s=="":
        return -1
    d={}
    for i in s:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
    for i in range(len(s)):
        if d[s[i]]==1:
            return i
    return -1


if __name__ == '__main__':
    s = input("")
    print(firstUniqChar(s))
