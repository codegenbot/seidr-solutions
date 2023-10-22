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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
"""

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        if len(s) <= 1:
            return s
        sList = s.split()
        results = []
        for word in sList:
            if len(word) >= 5:
                word = word[::-1]
            results.append(word)

        return ' '.join(results)



if __name__ == '__main__':
    test = Solution()
    s = "There's an app for that on Android."
    print test.reverseWords(s)
