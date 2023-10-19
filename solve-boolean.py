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
Task.
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
True

input:
t&f
output:
False

input:
t|f
output:
True

input:
t|t
output:
True

input:
f|f
output:
False

input:
t&f|f
output:
False

input:
f|t&f
output:
False

input:
t|t&f
output:
True

input:
t&t|f
output:
True

input:
t|f|f
output:
True

input:
t|t|f
output:
True

input:
f|f|f
output:
False

input:
f&t|t
output:
True

input:
f|f&t|t
output:
True

input:
f|f|t&t
output:
True

input:
t&t&t|f
output:
True

input:
t&t|t&t
output:
True

input:
f|f|f|t&t
output:
True

input:
t|f|t|t|f|t|f&f
output:
True

input:
t&f&t|f|f&t|f&f&t
output:
False

input:
f&t&t
output:
False
"""
