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

a
f
abcdefg


fabcdef

input:
a
f
aaaaaaaa

output:
fabcdef

input:
a
a
aaaaaaaa

output:
aaaaaaaa

input:
ruby
code
dolphin

output:
corks
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
def deCipher(key, cipherText):
    return cipherText.translate(str.maketrans(key, "abcdefghijklmnopqrstuvwxyz"))

def deCipherTest(key, cipherText):
    ans = ""
    dic = {key[i]: chr(ord('a') + i) for i in range(len(key))}
    for ch in cipherText:
        ans += dic[ch]
    return ans


if __name__ == '__main__':
    input = sys.stdin.read().splitlines()
    print(deCipher(input[0], input[1]))
