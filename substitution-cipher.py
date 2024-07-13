```
def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char in cipher1 and char in cipher2:
            index1 = cipher1.index(char)
            index2 = cipher2.index(char)
            deciphered_message += cipher2[index2]
        else:
            deciphered_message += char
    return deciphered_message