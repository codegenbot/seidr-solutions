import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def reverseWords(s):
    s=s.split()
    res=[]
    for i in range(len(s)):
        if len(s[i])>=5:
            res.append(s[i][::-1])
        else:
            res.append(s[i])
    return " ".join(res)

if __name__ == '__main__':
    print(reverseWords("this is another test"))  
