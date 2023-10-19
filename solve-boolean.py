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
input:
f&t&f&t|t&f|f&t&f|t|f&t|t&t|f&t&f|t&t|f
output:
True
"""
def evaluate(expr):
    if len(expr) == 1:
        if expr == 't':
            return True
        else:
            return False
    else:
        stack = []
        for char in expr:
            if char == '&':
                stack.append(char)
            elif char == '|':
                stack.append(char)
            elif char == 't':
                if len(stack) == 0:
                    stack.append(char)
                else:
                    if stack[-1] == '&':
                        if stack[-2] == 't':
                            stack.pop()
                            stack.pop()
                            stack.append('t')
                        else:
                            stack.pop()
                            stack.append('f')
                    elif stack[-1] == '|':
                        if stack[-2] == 't':
                            stack.pop()
                            stack.pop()
                            stack.append('t')
                        else:
                            stack.pop()
                            stack.append('t')
            elif char == 'f':
                if len(stack) == 0:
                    stack.append(char)
                else:
                    if stack[-1] == '&':
                        stack.pop()
                        stack.append('f')
                    else:
                        if stack[-2] == 't':
                            stack.pop()
                            stack.pop()
                            stack.append('t')
                        else:
                            stack.pop()
                            stack.append('f')
        if stack[0] == 't':
            return True
        else:
            return False

if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    print(evaluate(expr))
