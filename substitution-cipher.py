```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {a.lower(): b.lower() for a, b in zip(cipher1, cipher2)}
    deciphered_message = "".join([cipher.get(char.lower(), char) for char in message.lower()])
    return deciphered_message