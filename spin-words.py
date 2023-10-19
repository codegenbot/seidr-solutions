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
if __name__ == '__main__':
"""
Given an array, x, of N positive integers, calculate and print the standard 
deviation. Your answer should be in decimal form, rounded to a scale of 1 
decimal place (i.e., 12.3 format). 

i/p:
9

o/p:
2.1908902300206643
"""
if __name__ == '__main__':
    n = int(input()); 
    arr = list(map(int, input().strip().split(' ')));
    # mean
    m = sum(arr)/n;
    #
    meanList = [];
    for num in arr:
        meanList.append(num - m);
    #
    sqrList = [];
    for num in meanList:
        sqrList.append(num*num);
    # 
    summ=0;
    for num in sqrList:
        summ += num;

    std = math.sqrt(summ/n)
    print(round(std,1))
    
    # numpy way 
    # sqrList = [(num-m)**2 for num in arr];
    # summ = sum(sqrList);
    # print(round(math.sqrt(summ/n), 1));
