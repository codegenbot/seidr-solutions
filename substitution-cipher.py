```
def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha(): 
            if char.lower() in cipher1:
                index = cipher1.index(char.lower())
                deciphered_message += cipher2[index].lower() if char.islower() else cipher2[index].upper()
            else:
                deciphered_message += char
        else:  
            deciphered_message += char
    return deciphered_message