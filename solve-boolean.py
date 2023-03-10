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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t&|f
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""
if __name__ == '__main__':
    s = str(input())
    current_operator = None
    current_value = None
    stack = []
    for c in s:
        if c == '&' or c == '|':
            current_operator = c
        else:
            current_value = c
            if current_operator is not None:
                if current_operator == '&':
                    if stack[-1] == 'T' and current_value == 'T':
                        stack.pop()
                        stack.append('T')
                    else:
                        stack.pop()
                        stack.append('F')
                else:
                    if stack[-1] == 'F' and current_value == 'F':
                        stack.pop()
                        stack.append('F')
                    else:
                        stack.pop()
                        stack.append('T')
            else:
                stack.append(current_value)
    if stack[-1] == 'T':
        print(True)
    else:
        print(False)
