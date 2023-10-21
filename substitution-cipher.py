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
In this task, you have to read an integer number and calculate the sum of its digits.
For example, if the user enters the number 175, the program should calculate the sum of its digits, which is equal to 1+7+5=13.
The program should print the result on the screen.
"""
if __name__ == '__main__':
    n = int(input())
    print(sum(map(int, list(str(n)))))
