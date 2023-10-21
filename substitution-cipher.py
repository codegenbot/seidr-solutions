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
This problem gives a string. The program must print all the possible substrings of the given string.
For example, if the input is abc, the output should be:
a
ab
abc
b
bc
c
If the input is xyz, the output should be:
x
xy
xyz
y
yz
z
"""
if __name__ == '__main__':
    string = input()
    for i in range(len(string)):
        for j in range(i,len(string)):
            print(string[i:j+1])
