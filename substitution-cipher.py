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
This problem gives a string of text. The program must remove all the newlines and return the text as a single line.
For example, input:
I am a
cow.
output:
I am a cow.
"""
if __name__ == '__main__':
    s1 = input()
    s1 = s1.replace("\n", "")
    print(s1)
