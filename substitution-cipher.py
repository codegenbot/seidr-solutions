```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip(cipher1.lower(), cipher2.lower())}
    deciphered_message = "".join([cipher.get(char.lower(), char) for char in message])
    return deciphered_message