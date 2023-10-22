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
cipher = ""
encoded = ""
decoded = ""

infile = open('in.txt')
for line in infile:
    cipher = line.strip()
    encoded = infile.next().strip()
    decoded = infile.next().strip()

def decode(cipher, encoded, decoded):
    dict = {}
    for i in range(len(cipher)):
        if cipher[i] not in dict:
            dict[cipher[i]] = decoded[i]
    new_decoded = ""
    for character in encoded:
        new_decoded += dict[character]
    return new_decoded

if __name__ == '__main__':
