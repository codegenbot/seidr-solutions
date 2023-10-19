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
t         -->  True
f         -->  False
f&f       -->  False
f&t       -->  False
t&f       -->  False
t|t       -->  True
t|f       -->  True
f|t       -->  True
f|f       -->  False
f|f&t     -->  False
f|t|f     -->  True
t&f|f&t|  -->  False
============================================================================================
"""def evaluate_bool_expr(expr):
    while '|' in expr:
        pos_now = expr.rfind('|')
        if expr[pos_now+1] == 't':
            expr = expr[0:pos_now] + 't'
        else:
            expr = expr[0:pos_now] + 'f'
    while '&' in expr:
        pos_now = expr.rfind('&')
        if expr[pos_now+1] == 't':
            expr = expr[0:pos_now] + 't'
        else:
            expr = expr[0:pos_now] + 'f'
    return bool(eval(expr))
if __name__ == '__main__':
    print(evaluate_bool_expr('f|f&t'))
