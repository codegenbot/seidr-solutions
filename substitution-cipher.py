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
This problem gives a string. The program must return the string with all the newlines removed.
For example, input:
a\n\nb\n\nc\n\nd\n\ne\n\nf\n\ng\n\nh\n\ni\n\nj\n\nk\n\nl\n\nm\n\nn\n\no\n\np\n\nq\n\nr\n\ns\n\nt\n\nu\n\nv\n\nw\n\nx\n\ny\n\nz\n\n
output:
abcdefghijklmnopqrstuvwxyz
"""
if __name__ == '__main__':
    print("a\n\nb\n\nc\n\nd\n\ne\n\nf\n\ng\n\nh\n\ni\n\nj\n\nk\n\nl\n\nm\n\nn\n\no\n\np\n\nq\n\nr\n\ns\n\nt\n\nu\n\nv\n\nw\n\nx\n\ny\n\nz\n\n".replace("\n\n", ""))
