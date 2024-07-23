```
from itertools import zip_longest

def decipher_message(cipher1, cipher2, message):
    encrypt_map = {c1: c2 for c1, c2 in zip_longest(cipher1, cipher2) if c1 is not None and c2 is not None}
    result = "".join(encrypt_map.get(char.upper(), char) if char.isalpha() else char for char in message)
    return result