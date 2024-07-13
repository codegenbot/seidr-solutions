```
def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        try:
            deciphered_message += cipher2[cipher1.index(char)]
        except ValueError:
            deciphered_message += char
    return deciphered_message