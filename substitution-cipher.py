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
This problem gives a string. The program must return the string with all of the newline characters removed.
For example:
input: hello
world
output: helloworld
input: hello
world
again
output: helloworldagain
input: hello
world
again
again
output: helloworldagainagain
"""
if __name__ == '__main__':
    print(input().replace('\n',''))
