import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re


def substitution_cipher(message, cipher1):
    char_map = {}
    for i in range(len(cipher1)):
        char_map[cipher1[i]] = cipher1[i]

    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return deciphered_message


# Read input from the user
message = input("Enter message to decipher: ")
cipher1 = input("Enter cipher1: ")
cipher2 = input("Enter cipher2: ")

# Apply substitution cipher to the message
deciphered_message = substitution_cipher(message, cipher1)
print(f"Deciphered message: {deciphered_message}")