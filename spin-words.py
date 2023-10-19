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
Make sure that the addresses match (line numbers) everything between the delta
column and the delta column minus 1 should be in column 6. Below is an example
of the desired output.

For example,
input:
7.31.121.70 (11.01)	#5 | 2-11-0 | 32.25k	10.6k (-60dB)
7.31.121.70 (10.86)	#4 | 3-1-1 | 2018-11-19	0 (-70dB)
output:
7.31.121.70 (11.01)	#5 | 2-11-0 | 32.25k	10.6k (-60dB)
7.31.121.70 (10.86)	#4 | 3-1-1 | 2018-11-19	0 (-70dB)
"""
if __name__ == '__main__':
    #input:
    #this is a test
    #output:
    #this is a test
