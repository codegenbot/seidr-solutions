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

def eval_boolean(s):
    """
    这道题目做法是使用一个栈，把每一个字符放入栈中，如果遇到&或者|，就把栈顶的两个元素取出来进行计算，然后把结果再放入栈中。
    :param s:
    :return:
    """
    stack = []
    for c in s:
        if c == 't' or c == 'f':
            stack.append(c)
        elif c == '&':
            if stack[-1] == 'f' or stack[-2] == 'f':
                stack.append('f')
            else:
                stack.append('t')
        elif c == '|':
            if stack[-1] == 't' or stack[-2] == 't':
                stack.append('t')
            else:
                stack.append('f')
    return stack[-1] == 't'

if __name__ == '__main__':
    s = input()
    print(eval_boolean(s))
