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
This problem gives two strings. The program must check whether the second string is a substring of the first string. If it is, the program must return the index at which the second string begins in the first string. If it is not, the program must return -1.
For example, if the first string is "abc" and the second string is "c", the program must return 2. If the first string is "abc" and the second string is "d", the program must return -1.
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in c:
        d+=b[a.find(i)]
    print(d)
