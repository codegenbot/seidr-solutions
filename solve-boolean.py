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
# O(n) time and O(1) space, assuming we're using 't' and 'f' to represent True and False.
# O(n) time and O(n) space, assuming those are Python bools.
def eval_rpn(s):
    stack = []

    for c in s:
        if c not in "tf|&":
            if c == 't':
                stack.append(True)
            else:
                stack.append(False)
        else:
            if c == '|':
                stack.append(stack.pop() or stack.pop())
            elif c == '&':
                stack.append(stack.pop() and stack.pop())
            else:
                stack.append(not stack.pop())
    return stack.pop()

if __name__ == '__main__':
    print(eval_rpn('f&t&f|f'))
