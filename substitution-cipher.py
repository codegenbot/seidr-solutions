```
def substitution_cipher(cipher1, cipher2, message):
    return ''.join([cipher2[i] for i in [cipher1.index(c) if c in cipher1 else None for c in message]])