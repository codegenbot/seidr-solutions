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
t
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
def boolean_eval(str):
    stack = []
    for i in range(len(str)):
        if str[i] == 't':
            stack.append(True)
        elif str[i] == 'f':
            stack.append(False)
        elif str[i] == '&':
            stack.append(stack.pop() & stack.pop())
        elif str[i] == '|':
            stack.append(stack.pop() | stack.pop())
    return stack.pop()

if __name__ == '__main__':
    str = input()
    print(boolean_eval(str))
