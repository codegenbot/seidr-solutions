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
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.
"""
if __name__ == '__main__':
    T = int(input())
    for _ in range(T):
        S = input()
        print(S[::2],S[1::2])
