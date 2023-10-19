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
Given a string, output the string without any whitespace.
input: 
Hello, world!
output:
Hello,world!
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in c:
        d+=b[a.find(i)]
    print(d)
