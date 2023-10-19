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
This problem gives a string of characters. The program must remove all duplicate characters, and return the result.
For example:
input: aabbccdd
output: abcd
input: aaabbbcccddd
output: abcd
input: aabbccddeeffgghhiijj
output: abcdefghij
input: aaabbbcccdddeeefffggghhhiiijjjkkklllmmmnnnooopppqqqrrrssstttuuuvvvwwwxxxyyyzzz
output: abcdefghijklmnopqrstuvwxyz
input: aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz
output: abcdefghijklmnopqrstuvwxyz
input: aaabbbcccdddeeefffggghhhiiijjjkkklllmmmnnnooopppqqqrrrssstttuuuvvvwwwxxxyyyzzzAAABBBCCCDDDEEEFFFGGGHHHIIIJJJKKKLLLMMMNNNOOOPPPQQQRRRSSSTTTUUUVVVWWWXXXYYYZZZ
output: abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
"""
if __name__ == '__main__':
    a = input() 
    print(''.join(list(set(a))))
