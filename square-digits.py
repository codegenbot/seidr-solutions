```
import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def square_digits(n):
    # Initialize an empty string to store the concatenated squares
    result = ""
    
    # Loop through each digit in the input number
    for digit in str(n):
        # Calculate the square of the current digit
        square = int(digit) ** 2
        
        # Concatenate the square with the result string
        result += str(square)
    
    # Return the concatenated squares
    return result
```