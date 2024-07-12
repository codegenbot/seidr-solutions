def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip(a.lower() for a in cipher1, (b.lower() if b.isalpha() else b) for b in cipher2)}
    deciphered_message = "".join([cipher.get(char.lower(), char) for char in message])
    return deciphered_message