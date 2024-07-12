def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip(cipher1, cipher2)}
    deciphered_message = "".join([cipher.get(char, char) for char in message])
    return "".join([cipher2[c] if c in cipher2 else c for c in message])