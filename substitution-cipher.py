import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
if __name__ == '__main__':
    line1 = input()
    line2 = input()
    line3 = input()
    length = len(line2)
    cipher = dict()
    for i in range(length):
        cipher[line1[i]] = line2[i]
    out = ''
    for i in line3:
        out += cipher[i]
    print(out)
