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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
TV
output:
V
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
"""
if __name__ == '__main__':
    s=input()
    if len(s)%2==0:
        t=int(len(s)/2)
        print(s[t-1]+s[t])
    else:
        t=int(len(s)/2)
        print(s[t])
