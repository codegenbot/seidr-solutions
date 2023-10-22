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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:

output:

input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
"""
if __name__ == '__main__':
    line = sys.stdin.readline().strip()
    if len(line) % 2 != 0:
        print(line[math.floor(len(line) / 2)])
    else:
        print(line[int(len(line) / 2 - 1)] + line[int(len(line) / 2)])
"""
Given a list of characters and a string, return True if the characters are in order, False otherwise.
For example,
input:
chars = ['a', 'b', 'c', 'd', 'e']
string = 'Abce'
output:
True
input:
chars = ['a', 'b', 'c', 'd', 'e']
string = 'aaaa'
output:
True
input:
chars = ['a', 'b', 'c', 'd', 'e']
string = 'xAbce'
output:
False
"""
if __name__ == '__main__':
    chars = sys.stdin.readline().strip()
    string = sys.stdin.readline().strip()
    numbers = []
    for i in chars:
        numbers.append(ord(i))
    print(numbers)
    index = 0
    for j in string:
        if j == ' ':
            continue
        if ord(j) - numbers[index] > 0:
            print('TRUE')
        elif ord(j) - numbers[index] < 0:
            print('FALSE')
        else:
            print('TRUE')
        index += 1
    if index != numbers.__len__():
        print('FALSE')
