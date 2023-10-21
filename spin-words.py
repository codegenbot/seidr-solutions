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
    l = input()
    l = l.split(' ')
    for i in range(len(l)):
        if len(l[i]) >= 5:
            l[i] = l[i][::-1]
    print(' '.join(l))
