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
This problem gives a string. The program must return the string with the newlines replaced by spaces, but only if there are two newlines in a row.
For example:

input: 
Hello,
my name is
Inigo Montoya.
You killed my
father.
Prepare to die.
output:
Hello, my name is Inigo Montoya. You killed my father. Prepare to die.
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
