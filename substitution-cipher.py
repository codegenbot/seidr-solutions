import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def substitution_cipher(message, cipher):
    # Create a dictionary to store the mapping of characters in cipher1 and cipher2
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = cipher[i]

    # Decipher the message by replacing each character with its corresponding character in cipher2
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return deciphered_message

# Read input from the user
message = input("Enter message to decipher: ")
substitution_cipher = input("Enter substitution cipher: ")

# Apply substitution cipher to the message
deciphered_message = substitution_cipher(message, substitution_cipher)
print(f"Deciphered message: {deciphered_message}")