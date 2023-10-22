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
Write a program which reads 3 input strings and reverses them into integer.
For example, if the input is "Hello" "World" "1", then the output should be 1099544661
input:
Hello
World
1
output:
1099544661
input:
World
Hello
1
output:
717676293
input:
ab
cd
1
output:
1099544661
input: ZZ zz Aa aa
output: 1099544661
input: 990000000000 990000
output: 19099999900000
"""

def inpt():
    str1 = raw_input();
    str2 = raw_input();
    str3 = raw_input();
    return str1, str2, str3;

def input32():
    """
    pure input function sometime is too slow compare to this input function
    """
    str = raw_input();
    ret = str.split();
    return ret;
    
def output32(num):
    """
    num is a string
    """
    print(num);

def intTo32BitBinary(num):
    ret = list(format(num, "032b")); 
    popZero(ret);
    return ret;

def bigIntTo32BitBinary(num):
    """
    4 bytes
    """
    ret = list(format(num, "b")); 
    popZero(ret);
    return ret;

def intTo8BitBinary(num):
    ret = list(format(num, "08b"));
    popZero(ret);
    return ret;
    
def popZero(arr):
    while arr[len(arr) - 1] == '0':
        arr.pop();
        
def strToBinaryArr(str, binaryArr):
    size = len(str);
    asciiArr = [ord(c) for c in str];
    
    cnt = 0;
    for i in range(size):
        tmp = intTo8BitBinary(asciiArr[i]);
        for j in range(len(tmp)):
            binaryArr[cnt] = tmp[j];
            cnt += 1;
        if cnt >= 32:
            break;
    for i in range(cnt, 32):
        binaryArr[cnt] = '0';
        cnt += 1;
    
    return binaryArr;

def arrToNum(arr):
    sum = 0;
    for i in range(len(arr)):
        sum = sum * 2;
        if arr[i] == '1':
            sum = sum + 1;
    return sum;


if __name__ == '__main__':
    cnt = input();
    tries = int(cnt);
    
    for i in range(tries):
        str1, str2, str3 = inpt();
        binaryArr = ['0']*32;
        str1Arr = strToBinaryArr(str1, binaryArr);
        str2Arr = strToBinaryArr(str2, binaryArr);
        str3Arr = strToBinaryArr(str3, binaryArr);
        
        str1Value = arrToNum(str1Arr);
        str2Value = arrToNum(str2Arr);
        str3Value = arrToNum(str3Arr);
        
        output32(str1Value + str2Value * pow(2, 16) + str3Value * pow(2, 32));
