import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def isHappy(n):
    """
    :type n: int
    :rtype: bool
    """
    mem = set()
    while n != 1:
        n = sum([int(i) ** 2 for i in str(n)])
        if n in mem:
            return False
        else:
            mem.add(n)
    return True


if __name__ == '__main__':
    print(isHappy(2))
