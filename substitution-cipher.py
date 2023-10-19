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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.\n
For example,
input:\n
\n
\n
output:\n
\n
input:\n
a\n
a\n
a\n
output:\n
a\n
input:\n
j\n
h\n
j\n
output:\n
h\n
input:\n
a\n
z\n
a\n
output:\n
z\n
input:\n
e\n
l\n
eeeeeeeeee\n
output:\n
llllllllll\n
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in c:
        d+=b[a.find(i)]
    print(d)
