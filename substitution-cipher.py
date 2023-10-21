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
Given a string, return a string where for every char in the original, there are two chars.
double_char('The') → 'TThhee'
double_char('AAbb') → 'AAAAbbbb'
double_char('Hi-There') → 'HHii--TThheerree'
"""
if __name__ == '__main__':
    s1 = input()
    s2 = input()
    s3 = input()
    s4 = ""
    for i in range(len(s3)):
        for j in range(len(s1)):
            if s3[i] == s1[j]:
                s4 += s2[j]
    print(s4)
