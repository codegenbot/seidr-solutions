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
Given a string, return the string made of its first two chars, so the String "Hello" yields "He". If the string is shorter than length 2, return whatever there is, so "X" yields "X", and the empty string "" yields the empty string "". Note that str.length() returns the length of a string.
input:
Hello
output:
He
input:
java
output:
ja
input:
Hi
output:
Hi
input:
H
output:
H
"""
if __name__ == '__main__':
    a = input()
    b = input()
    c = input()
    d = ''
    for i in c:
        d+=b[a.find(i)]
    print(d)
