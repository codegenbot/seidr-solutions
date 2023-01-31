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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""
if __name__ == '__main__':
    # read the input
    expression = input()
    # initialize a stack to store the operators
    stack = []
    # for each character in the expression
    for char in expression:
        # if the character is an operator
        if char == '|' or char == '&':
            # push it onto the stack
            stack.append(char)
        # if the character is a 'T' or 'F'
        elif char == 't' or char == 'f':
            # if the stack is empty
            if len(stack) == 0:
                # push the character onto the stack
                stack.append(char)
            # if the stack is not empty
            else:
                # pop the top operator from the stack
                operator = stack.pop()
                # pop the top operand from the stack
                operand = stack.pop()
                # if the operator is '|'
                if operator == '|':
                    # if the operand is 'T' or the character is 'T'
                    if operand == 't' or char == 't':
                        # push 'T' onto the stack
                        stack.append('t')
                    # if the operand is 'F' and the character is 'F'
                    elif operand == 'f' and char == 'f':
                        # push 'F' onto the stack
                        stack.append('f')
                    # if the operand is 'F' and the character is 'T'
                    elif operand == 'f' and char == 't':
                        # push 'T' onto the stack
                        stack.append('t')
                    # if the operand is 'T' and the character is 'F'
                    elif operand == 't' and char == 'f':
                        # push 'T' onto the stack
                        stack.append('t')
                # if the operator is '&'
                elif operator == '&':
                    # if the operand is 'T' and the character is 'T'
                    if operand == 't' and char == 't':
                        # push 'T' onto the stack
                        stack.append('t')
                    # if the operand is 'F' or the character is 'F'
                    elif operand == 'f' or char == 'f':
                        # push 'F' onto the stack
                        stack.append('f')
                    # if the operand is 'F' and the character is 'T'
                    elif operand == 'f' and char == 't':
                        # push 'F' onto the stack
                        stack.append('f')
                    # if the operand is 'T' and the character is 'F'
                    elif operand == 't' and char == 'f':
                        # push 'F' onto the stack
                        stack.append('f')
    # print the top of the stack as the result
    print(stack.pop() == 't')
