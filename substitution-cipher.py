```
from itertools import zip_longest

def decipher_message(cipher1, cipher2, message):
    encrypt_map = {}
    for c1, c2 in zip_longest(cipher1, cipher2):
        if c1 is not None:
            encrypt_map[c1] = c2
    result = "".join(encrypt_map.get(char, char) for char in message)
    return result