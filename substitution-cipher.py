```
def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char in cipher1:
            deciphered_message += cipher2[[(i for i, x in enumerate(cipher1) if x == char)][0]]
        else:
            deciphered_message += char
    return deciphered_message