def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip(cipher1, cipher2)}
    deciphered_message = "".join([cipher.get(char.upper(), char).upper() for char in message])
    return deciphered_message