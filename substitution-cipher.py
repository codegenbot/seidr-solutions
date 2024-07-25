```
def substitution_cipher(cipher1, cipher2, message):
    cipher = str(cipher2)[0:len(cipher1)]
    deciphered_message = ""
    for char in message:
        if char in cipher:
            index = cipher.index(char)
            deciphered_message += cipher2[index]
        else:
            deciphered_message += char
    return deciphered_message