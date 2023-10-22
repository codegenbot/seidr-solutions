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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:
[a z] [a b] a
[j f] [w s] i
[a z] [a z] a
[e l] [f m] eeee



output:
a b
i j
a a
e ffff
"""
if __name__ == '__main__':
