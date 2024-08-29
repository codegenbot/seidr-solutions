def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_message = ""
    for char in text:
        if char.isalpha():
            index = ord(char.lower()) - 97
            deciphered_char = cipher_text2[index]
            deciphered_message += (
                deciphered_char.upper() if char.isupper() else deciphered_char
            )
        else:
            deciphered_message += char
    return deciphered_message