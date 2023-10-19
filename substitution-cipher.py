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
The program must accept two strings S1 and S2 and return the string S3 as output.
The program must replace the new line characters in S1 with space and store it in S3.
The program must replace the new line characters in S2 with space and store it in S3.
The program must concatenate S3 and S4.
The program must print the string S3 as the output.
Boundary Condition(s):
1 <= Length of S1, S2 <= 1000
Input Format:
The first line contains S1.
The second line contains S2.
Output Format:
The first line contains S3.
Example Input/Output 1:
Input:
Welcome
to
Wipro
Example Input/Output 2:
Input:
Hello
World
Example Input/Output 3:
Input:
Hello
World
Wipro
"""
s1,s2=input(),input()
s3=s1.replace('\n',' ')+s2.replace('\n',' ')
print(s3)
