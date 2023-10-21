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
    string = input()
    for i in range(len(string)):
        for j in range(i,len(string)):
            print(string[i:j+1])
