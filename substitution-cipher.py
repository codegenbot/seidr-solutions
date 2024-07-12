from itertools import zip_longest

def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip_longest(cipher1, cipher2, fillvalue='') if a != ''}
    deciphered_message = "".join([cipher.get(char, char) for char in message])
    return deciphered_message