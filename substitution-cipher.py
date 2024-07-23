from collections import OrderedDict

def decipher_message(cipher1, cipher2, message):
    encrypt_map = OrderedDict()
    for c1, c2 in zip_longest(sorted(cipher1), sorted(cipher2)):
        if c1:
            encrypt_map[c1] = c2
    result = "".join(encrypt_map.get(char, char) for char in message)
    return result