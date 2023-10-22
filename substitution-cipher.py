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
    list1 = []
    list2 = []
    list3 = []
    list1 = list(input())
    list2 = list(input())
    list3 = list(input())
    list4 = []
    list5 = []
    list4 = list1
    list5 = list2
    list1 = list(zip(list1,list2))
    list2 = list(zip(list3,list4))
    list3 = list(zip(list2,list5))
    list4 = []
    list5 = []
    for i in range(len(list1)):
        for j in range(len(list1)):
            if list1[i][0] == list2[j][0]:
                list4.append(list1[i][1])
    for i in range(len(list1)):
        for j in range(len(list1)):
            if list3[i][0][0] == list1[j][0]:
                list5.append(list3[i][0][1])
    for i in range(len(list1)):
        for j in range(len(list1)):
            if list5[i] == list1[j][0]:
                list5[i] = list1[j][1]
    print("".join(list5))
