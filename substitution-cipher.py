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
This problem gives a string with a series of characters, numbers, and symbols. The program must remove every character that is not a digit or a letter, and return the new string.
For example, input:
Hello, World!
output:
HelloWorld
input:
This is a test.
output:
Thisisatest
input:
This is a test.
output:
Thisisatest
input:
This is a test.
output:
Thisisatest
input:
This is a test.
output:
Thisisatest
"""
if __name__ == '__main__':
    line = input()
    out = ''
    for i in line:
        if i.isalpha() or i.isdigit():
            out += i
    print(out)
