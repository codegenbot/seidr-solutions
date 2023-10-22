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
 
output:
 
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
    with open('data.txt', 'r') as f:
        data = f.readlines()
        for line in data:
            line = line.strip()
            if len(line) % 2 == 0:
                print line[(len(line)/2)-1:(len(line)/2)+1]
            else:
                print line[len(line)/2]
