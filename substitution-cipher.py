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

def cipher_substitution(cipher1, cipher2, message):
    # Create a dictionary to store the mapping between characters in cipher1 and cipher2
    cipher_dict = {}
    for i, char in enumerate(cipher1):
        cipher_dict[char] = cipher2[i]
    
    # Apply the substitution cipher to the message
    deciphered_message = ""
    for char in message:
        if char in cipher_dict:
            deciphered_message += cipher_dict[char]
        else:
            deciphered_message += char
    
    return deciphered_message
```