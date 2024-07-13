def substitution_cipher(cipher1, cipher2, message):
    c1 = sorted(cipher1)
    c2 = sorted(cipher2)
    cipher = {a: b for a, b in zip(c1, c2)}
    deciphered_message = "".join([cipher.get(char, char) for char in message])
    return deciphered_message