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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message. For example,

input: a a a output: a input: j h j output: h input: a z a output: z input: e l eeeeeeeeee output: llllllllll
"""
if __name__ == '__main__':
    input_array = []
    for line in sys.stdin:
        input_array.append(line.strip())
    if len(input_array) == 3:
        if input_array[0] == '' and input_array[1] == '' and input_array[2] == '':
            print('')
        else:
            for i in range(len(input_array[0])):
                if i < len(input_array[2]):
                    print(input_array[1][input_array[0].index(input_array[2][i])], end='')
    else:
        print(input_array[0])
