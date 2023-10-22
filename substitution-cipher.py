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
This problem gives a string and a number N. The program must print the string in a reverse spiral pattern, starting from the center and going outwards. The spiral pattern must stop after N characters have been printed.
For example, if the input is:

abcdefghijklmnopqrstuvwxyz
12
the output should be:


mqwxy
lpvut
korss
jnrrp

If the input is:

abcdefghijklmnopqrstuvwxyz
5
the output should be:

mqwx
lpvt
kors
jnrp

If the input is:

abcdefghijklmnopqrstuvwxyz
4
the output should be:

mqwx
lpvt
kors
jnrp

If the input is:

abcdefghijklmnopqrstuvwxyz
3
the output should be:

mqw
lpv
kor
jnr

If the input is:

abcdefghijklmnopqrstuvwxyz
2
the output should be:

mq
lp
ko
jn

If the input is:

abcdefghijklmnopqrstuvwxyz
1
the output should be:

m
l
k
j

If the input is:

abcdefghijklmnopqrstuvwxyz
0
the output should be:

m
l
k
j

If the input is:

abcdefghijklmnopqrstuvwxyz
26
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
27
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
28
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
29
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
30
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
31
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
32
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
33
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
34
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
35
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
36
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
37
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
38
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
39
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
40
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
41
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
42
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
43
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
44
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
45
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
46
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
47
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
48
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
49
the output should be:

abcdefghijklmnopqrstuvwxyz

If the input is:

abcdefghijklmnopqrstuvwxyz
50
the output should be:

abcdefghijklmnopqrstuvwxyz

"""
if __name__ == '__main__':
