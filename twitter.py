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
Given a string representing a tweet, validate whether the tweet meets Twitter’s original character requirements. If the tweet has more than 140 characters, return the string "Too many characters". If the tweet is empty, return the string "You didn't type anything". Otherwise, return "Your tweet has X characters", where the X is the number of characters in the tweet.
For example,
input:

output:
You didn't type anything
input:
1
output:
Your tweet has 1 characters
input:
max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it
output:
Your tweet has 140 characters
input:
40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)
output:
Your tweet has 90 characters
input:
Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1
output:
Too many characters
"""
if __name__ == '__main__':
    tweet = input()
    if len(tweet) == 0:
        print("You didn't type anything")
    elif len(tweet) > 140:
        print("Too many characters")
    else:
        print("Your tweet has {} characters".format(len(tweet)))
