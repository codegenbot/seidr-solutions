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
Given a string representing a Boolean expression consisting of T, F, |, &, ! evaluate it and return the resulting Boolean.
For
t|t|t&t&t|f|f&f|t
input:
True

t&f|!(F&t)
input:
False

t&f|(!f|!t&f)|!t
input:
True

!(!(F|t))
output:
True
input:
True

t|!(t&t|t&t
input:
True

!(!F)
output:
False

T
input: 
True
"""
if __name__ == '__main__':
