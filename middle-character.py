import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

if __name__ == '__main__':
    input = input()
    if len(input)%2==0:
        print(input[int(len(input)/2)-1]+input[int(len(input)/2)])
    else:
        print(input[int(len(input)/2)])
