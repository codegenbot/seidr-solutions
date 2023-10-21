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
QQQ
output:
QQ
input:
QQQQ
output:
QQ
input:
QQQQQ
output:
QQQ
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
input:
Q
output:
Q
"""
if __name__ == '__main__':
    s=input()
    if len(s)%2==1:
        print(s[int(len(s)/2)])
    else:
        print(s[int(len(s)/2-1):int(len(s)/2+1)])
