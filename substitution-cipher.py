def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip(cipher1, cipher2)}
    deciphered_message = "".join([cipher2[c1] if c1 in cipher2 else c1 for c1 in message])
    return deciphered_message