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
    def eval_boolean_exp(string):
        if string == 't':
            return True
        elif string == 'f':
            return False
        else:
            exp = []
            i = 0
            while i < len(string):
                if string[i] == '|':
                    exp.append('|')
                    i += 2
                elif string[i] == '&':
                    exp.append('&')
                    i += 2
                else:
                    exp.append(string[i])
                    i += 1
            i = 1
            while i < len(exp):
                if exp[i] == '|':
                    if exp[i - 1] == 't' or exp[i + 1] == 't':
                        exp[i] = 't'
                        del exp[i - 1]
                        del exp[i]
                    else:
                        exp[i] = 'f'
                        del exp[i - 1]
                        del exp[i]
                elif exp[i] == '&':
                    if exp[i - 1] == 'f' or exp[i + 1] == 'f':
                        exp[i] = 'f'
                        del exp[i - 1]
                        del exp[i]
                    else:
                        exp[i] = 't'
                        del exp[i - 1]
                        del exp[i]
                else:
                    i += 1
            if exp[0] == 't':
                return True
            else:
                return False
    print eval_boolean_exp('t|f')
