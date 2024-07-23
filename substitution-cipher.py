import string

def decipher_message(cipher1, cipher2, message):
    mapping = str.maketrans(cipher1, cipher2)
    result = message.translate(mapping).lower()
    return result