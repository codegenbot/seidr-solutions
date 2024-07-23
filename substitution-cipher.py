```
from itertools import zip_longest

def decipher_message(cipher1, cipher2, message):
    encrypt_map = {}
    for c1, c2 in zip_longest(cipher1, cipher2):
        if c1 is not None:
            if c1.isalpha():
                key = c1.upper()
                value = c2.upper() if c1.isupper() else c2.lower()
                encrypt_map[key] = value
    result = "".join(encrypt_map.get(char.upper(), char) if char.isalpha() else char for char in message)
    return result