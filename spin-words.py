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
Given a string of one or more words (separated by spaces), return the same string,
except with all five or more letter words reversed. Strings passed in will consist
of only letters and spaces. Spaces will be included only when more than one word is present.

Examples:
spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw"
spinWords( "This is a test") => returns "This is a test"
spinWords( "This is another test" )=> returns "This is rehtona test"
"""


def spin_words(input_str):
    return ' '.join(item if len(item) < 5 else item[::-1] for item in input_str.split())


if __name__ == '__main__':
    input_str = sys.argv[1] if len(sys.argv) > 1 else 'Hey fellow warriors'
    print(spin_words(input_str))
