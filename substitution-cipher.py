import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
import fileinput
if __name__ == '__main__':
    dic = {}
    a = input().strip()
    b = input().strip()
    c = input().strip()
    for i in range(len(a)):
        dic[a[i]] = b[i]
    for i in range(len(c)):
        print(dic[c[i]], end="")
