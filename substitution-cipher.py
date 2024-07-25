```
def substitution_cipher(cipher, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                deciphered_message += chr((ord(cipher[0].upper()) - 65 + ord(char) - 65) % 26 + 65)
            else:
                deciphered_message += chr((ord(cipher[1].lower()) - 97 + ord(char.lower()) - 97) % 26 + 97)
        else:
            deciphered_message += char
    return deciphered_message