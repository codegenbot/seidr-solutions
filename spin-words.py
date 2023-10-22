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
class solution(object):
    def __init__(self, input):
        self.__str_list = input.split(' ')

    def reverse(self, input):
        reversed = input[-1:0:-1]
        result = input[0] + reversed + input[-1]
        return result

    def execute(self):
        return ' '.join([self.__str_list[i][::-1] if len(self.__str_list[i]) >= 5 else self.__str_list[i] for i in range(len(self.__str_list))])

if __name__ == '__main__':
    str_1 = 'this is a test '
    solution_1 = solution(str_1)
    print(solution_1.execute())
    str_2 = 'this is another test'
    solution_2 = solution(str_2)
    print(solution_2.execute())
    str_3 = 'hi'
    solution_3 = solution(str_3)
    print(solution_3.execute())
