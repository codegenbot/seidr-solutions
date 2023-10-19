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
This is a problem that I had to do for a job interview. The program takes in a string and returns the output of the following rules:
1) If a character is a letter, then it is converted to lowercase.
2) If a character is a digit, then it is converted to an integer.
3) If a character is a whitespace character, then it is converted to a space.
4) If a character is a punctuation mark, then it is deleted.
5) If a character is a newline, then it is converted to a space.
6) If a character is a tab, then it is converted to a space.
"""
if __name__ == '__main__':
    a = input().lower()
    b = ''
    for i in a:
        if i == '\n':
            b+=' '
        elif i == '\t':
            b+=' '
        elif i.isalpha():
            b+=i
        elif i.isdigit():
            b+=i
        elif i.isspace():
            b+=i
    print(b)
