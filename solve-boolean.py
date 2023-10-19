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
True
output:
True
input:
False
output:
False
input:
False&False
output:
False
input:
False&True
output:
False
input:
True&False
output:
False
"""

def evaluateBoolean(expression):
    """
    :param expression: str
    :return: bool
    """
    if expression == 'True':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression:
        p1 = expression.split('&')[0]
        p2 = expression.split('&')[1]
        return evaluateBoolean(p1) and evaluateBoolean(p2)
    elif '|' in expression:
        p1 = expression.split('|')[0]
        p2 = expression.split('|')[1]
        return evaluateBoolean(p1) or evaluateBoolean(p2)

if __name__ == '__main__':
    print(evaluateBoolean('f&f'))
    print(evaluateBoolean('f&t'))
    print(evaluateBoolean('t&f'))
    print(evaluateBoolean('t|f'))
    print(evaluateBoolean('f|f'))
    print(evaluateBoolean('t|t'))
    print(evaluateBoolean('t|t|t'))
