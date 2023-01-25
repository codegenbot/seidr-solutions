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
abc
zed
abc
zed
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
    cipher = list(sys.stdin.readline().strip())
    key = list(sys.stdin.readline().strip())
    message = list(sys.stdin.readline().strip())
    decodedMessage = []
    for char in message:
       decodedMessage.append(key[cipher.index(char)])
    print(''.join(decodedMessage))
