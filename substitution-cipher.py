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
This problem gives 3 strings. The first two represent a cipher, mapping each character in
one string to the one at the same index in the other string. The program must apply this cipher
to the third string and return the deciphered message.
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
key = ""
message = ""
result = ""
def cipher_gen():
    with open("/root/PycharmProjects/Practice_Problems/file.txt") as cipher:
        content = cipher.readlines()
        content = [x.strip() for x in content]
        #print(content[0])
        #print(content[1])

    with open("/root/PycharmProjects/Practice_Problems/file.txt") as message:
        content = message.readlines()
        content = [x.strip() for x in content]
        #print(content[2])
    return content[0], content[1], content[2]

if __name__ == '__main__':
    c, k, m = cipher_gen()
    cipher, key, message = c, k, m
    result = ""
    for i, c in enumerate(message):
        if c in key:
            result += cipher[key.index(c)]
    print(result)
