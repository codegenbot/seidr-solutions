from itertools import zip_longest

def substitution_cipher(cipher1, cipher2, message):
    cipher = dict(zip_longest(cipher1, cipher2))
    return "".join([cipher.get(char, char) for char in message])