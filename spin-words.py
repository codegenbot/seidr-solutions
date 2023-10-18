import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def reverse(x):
    """
    :type x: int
    :rtype: int
    """
    if x==0:
        return 0
    sign=x//abs(x)
    x=abs(x)
    res=0
    while x>0:
        res=res*10+x%10
        x=x//10
    return sign*res

if __name__ == '__main__':
    print(reverse(0))
