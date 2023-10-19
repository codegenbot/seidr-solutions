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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.\nFor example,\ninput:\na\na\na\noutput:\na\ninput:\nj\nh\nj\noutput:\nh\ninput:\na\nz\na\noutput:\nz\ninput:\ne\nl\neeeeeeeeee\noutput:\nllllllllll
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ""
    for i in range(len(c)):
        d += b[a.index(c[i])]
    print(d)
