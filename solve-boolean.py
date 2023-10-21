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

def evaluate(expression):
    """ Evaluate a boolean expression.

    :param expression: str
    :return: bool
    """
    # TODO: Implement me
    expression = expression.replace("|", " or ")
    expression = expression.replace("&", " and ")
    return eval(expression, {"__builtins__":None}, {"t":True, "f":False})

if __name__ == '__main__':
