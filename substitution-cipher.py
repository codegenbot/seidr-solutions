def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha(): 
            if char.lower() in cipher1.lower():
                index = cipher1.index(char)
                deciphered_message += cipher2[index].lower() if char.islower() else cipher2[index].upper()
            else:
                deciphered_message += char
        elif char.isspace():
            deciphered_message += ' '
        else:
            deciphered_message += char
    return deciphered_message