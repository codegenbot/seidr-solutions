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
def evaluate_bool(s):
    if s == 't':
        return True
    elif s == 'f':
        return False
    else:
        s_list = list(s)
        s_list.reverse()
        stack = []
        for i in s_list:
            if i == '&':
                stack.append(i)
            elif i == '|':
                stack.append(i)
            elif i == 't':
                stack.append(i)
            elif i == 'f':
                stack.append(i)
            else:
                if stack[-1] == 't' and stack[-2] == 't':
                    stack.pop()
                    stack.pop()
                    stack.append('t')
                elif stack[-1] == 't' and stack[-2] == 'f':
                    stack.pop()
                    stack.pop()
                    stack.append('f')
                elif stack[-1] == 'f' and stack[-2] == 't':
                    stack.pop()
                    stack.pop()
                    stack.append('f')
                elif stack[-1] == 'f' and stack[-2] == 'f':
                    stack.pop()
                    stack.pop()
                    stack.append('f')
                elif stack[-1] == 't' and stack[-2] == '&':
                    stack.pop()
                    stack.pop()
                    stack.append('t')
                elif stack[-1] == 'f' and stack[-2] == '&':
                    stack.pop()
                    stack.pop()
                    stack.append('f')
                elif stack[-1] == 't' and stack[-2] == '|':
                    stack.pop()
                    stack.pop()
                    stack.append('t')
                elif stack[-1] == 'f' and stack[-2] == '|':
                    stack.pop()
                    stack.pop()
                    stack.append('f')
        if stack[0] == 't':
            return True
        else:
            return False

if __name__ == '__main__':
    s = sys.stdin.readline().strip()
    print(evaluate_bool(s))
