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
Wow
output:
o
input:
Help
output:
lp
input:
World
output:
rl
input:
Hi
output:
H
input:
HelloWorld
output:
l
"""
if __name__ == '__main__':
    s=""
    while True:
        try:
            s = input()
        except:
            break
        n = len(s)
        if (n%2==0):
            print(s[int(n/2-1):n//2+1])
        else:
            print(s[int(n/2)])
            
    
