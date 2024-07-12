```
def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char.isspace():
            deciphered_message += ' '
        elif char.isalpha():
            if char.lower() in cipher1:
                index = cipher1.index(char.lower())
                deciphered_message += cipher2[index].upper() if char.isupper() else cipher2[index].lower()
            else:
                deciphered_message += char
        else:
            deciphered_message += char
    return deciphered_message