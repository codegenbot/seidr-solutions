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
line1 = input() # encoding1 encoding2 ... encoding
line2 = input(["a"]) # encrypt_of_a 
line3 = input() # str_to_encrypt
line4 = input(["a"]) # decrypt_of_a


line1 a b c
line2 1 2 3
line3 adabec
line4 1112212
"""




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
    line1 = input()
    line2 = input()
    line3 = input()
    length = len(line2)
    cipher = dict()
    for i in range(length):
        cipher[line1[i]] = line2[i]
    out = ''
    for i in line3:
        out += cipher[i]
    print(out)
