def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha() and (char.lower() in cipher1 or char.upper() in cipher1):
            index = cipher1.index(char.lower())
            deciphered_message += cipher2[index].upper() if char.isupper() else cipher2[index]
        else:
            deciphered_message += char
    return deciphered_message