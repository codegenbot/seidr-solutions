import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import string
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

def decode(cipher, encoded):
    return ''.join([chr(ord(cipher[ord(x) - ord('a')]) + ord('a')) for x in encoded])

if __name__ == '__main__':
    cipher = input()
    encoded = input()
    print(decode(cipher, encoded))
