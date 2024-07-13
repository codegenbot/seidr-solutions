```
def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = "".join([cipher2[cipher1.index(char)] if char in cipher1 else char for char in message])
    return deciphered_message