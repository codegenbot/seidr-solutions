#import operator
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
def evaluate(expr):
    result = False
    if len(expr) == 1:
        if expr == 't':
            return True
        else:
            return False
    else:
        i = 0
        l = list()
        while i < len(expr)-1:
            if expr[i+1] in '|&':
                l.append(expr[i])
                l.append(expr[i+1])
                print('l[i+1] in "|&":', l)
                if (i == 0 and (expr[i] == 't') and (expr[i+2] == 't')) or (i != 0 and (expr[i+2] == 't') and (expr[i-1] == 't')):
                    result = True
                elif i != 0 and (expr[i+2] == 't') and (expr[i-1] == 'f') and l.index(expr[i+1]) - l.index(expr[i-1]) == 2:
                    l = l[:l.index(expr[i+1])]
                    result = True
                myStr = ''.join(l)
                #if operator.eq(myStr.find(expr[i]), 1):
                print(expr[i+2])
                if (i == 0 and (expr[i] == 't') and (expr[i+2] == 'f')) or (i != 0):
                    print('myStr before find:', myStr)
                    myStr = myStr[:myStr.find(expr[i+2])]
                    print('myStr after find:', myStr)
                    if len(myStr) == 1:
                        if myStr == 't':
                            result = True
                        elif myStr == 'f':
                            result = False
                    else:
                        if i != 0:
                            myStr = myStr[:-1]
                            if myStr == 't':
                                result = True
                            else:
                                result = False
                            #print('current letters, result:', myStr, result)
                            results = myStr, result
                            #print(type(results))
                            return results
                    else:
                        print('ignore last letter')
    if i == len(expr)-1 and result is True:
        print(result)
    else:
        print(False)
if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    print(evaluate(expr))
