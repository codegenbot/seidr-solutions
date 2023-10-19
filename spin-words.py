
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
"""
def reverse_words(str):
    str_list = str.split(" ")
    res_list = []
    for item in str_list:
        if len(item) >= 5:
            res_list.append(item[::-1])
        else:
            res_list.append(item)
    return " ".join(res_list)

if __name__ == '__main__':
    str = "this is a test"
    print(reverse_words(str))
