import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
# Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
if __name__ == '__main__':
    str = input()
    l = str.split(' ')
    s = ''
    for i in l:
        if len(i)>=5:
            s = s + ' ' + i[::-1]
        else:
            s = s + ' ' + i
    print(s.strip())
