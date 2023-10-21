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
This problem gives a string. The program must remove all duplicate characters from this string.
For example, input:
hello
output:
helo
input:
aaaa
output:
a
input:
abcdefghijklmnopqrstuvwxyz
output:
abcdefghijklmnopqrstuvwxyz
input:
aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz
output:
abcdefghijklmnopqrstuvwxyz
input:
mississippi
output:
misp
"""
if __name__ == '__main__':
    s = input()
    s1 = ""
    for i in range(len(s)):
        if s[i] not in s1:
            s1 += s[i]
    print(s1)
