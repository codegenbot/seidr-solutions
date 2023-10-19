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
Given a positive integer N, print a palindromic triangle of size N. For example, a palindromic triangle of size 5 is:
1
121
12321
1234321
123454321
"""
if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        for j in range(n-i,0,-1):
            print(' ',end='')
        for j in range(1,i+1):
            print(j,end='')
        for j in range(i-1,0,-1):
            print(j,end='')
        print()
