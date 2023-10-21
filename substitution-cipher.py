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
You are given a string S.
Your task is to print all possible combinations, up to size k, of the string in lexicographic sorted order.
"""
if __name__ == '__main__':
    s, k = input().split()
    for i in range(1, int(k) + 1):
        for j in itertools.combinations(sorted(s), i):
            print(''.join(j))
