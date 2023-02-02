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
if __name__ == '__main__':
    def eval_bool(s):
        if len(s) == 1:
            if s == "t":
                return True
            else:
                return False
        else: #len(s) > 1
            if s[0] == "t":
                return True
            elif s[0] == "f":
                return False
            elif s[1] == "|":
                return eval_bool(s[0]) or eval_bool(s[2])
            else:
                return eval_bool(s[0]) and eval_bool(s[2])
    s = "t"
    print(eval_bool(s))
