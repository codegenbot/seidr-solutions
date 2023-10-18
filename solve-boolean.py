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
    exp = raw_input()
    final_exp = []
    for i in range(len(exp)):
        if exp[i] == 't':
            final_exp.append(True)
        elif exp[i] == 'f':
            final_exp.append(False)
        else:
            final_exp.append(exp[i])
    print final_exp
    while len(final_exp) > 1:
        for i in range(len(final_exp)):
            if final_exp[i] == '&':
                final_exp[i] = final_exp[i-1] and final_exp[i+1]
                del final_exp[i+1]
                del final_exp[i-1]
                break
            elif final_exp[i] == '|':
                final_exp[i] = final_exp[i-1] or final_exp[i+1]
                del final_exp[i+1]
                del final_exp[i-1]
                break
    print final_exp[0]
