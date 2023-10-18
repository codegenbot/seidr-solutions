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
Given an integer, return the number of trailing zeros in its factorial.

Example

For n = 10, the output should be
zeros(n) = 2;
For n = 20, the output should be
zeros(n) = 4.
"""

def zeros(n):
    res = 0
    while n>=5:
        n=n//5
        res+=n
    return res


if __name__ == '__main__':
    print(reverseWords("this is another test"))
