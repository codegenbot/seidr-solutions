def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message.lower():
        if char in cipher1.lower():
            index = cipher1.index(char)
            deciphered_message += cipher2[index].lower()
        else:
            deciphered_message += char
    return deciphered_message