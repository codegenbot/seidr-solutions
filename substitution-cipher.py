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
The input will consist of a single integer. Your task is to find the sum of all the digits in the integer.
For example, if the input is 12345, the output should be 15.
"""
if __name__ == '__main__':
    s = input()
    print(sum(map(int, list(s)))) 
