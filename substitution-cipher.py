def substitution_cipher(cipher1, cipher2, message):
    return ''.join([cipher2[ord(c)-97] if c in cipher1 else '' for c in message])