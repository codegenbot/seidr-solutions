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
    input_str = raw_input()
    if len(input_str)%2 == 0:
        print input_str[len(input_str)/2-1:len(input_str)/2+1]
    else:
        print input_str[len(input_str)/2]
