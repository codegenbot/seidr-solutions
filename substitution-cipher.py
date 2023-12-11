
def decipher(cipher1, cipher2, message):
    return "".join([cipher2[cipher1.index(c)] for c in message])