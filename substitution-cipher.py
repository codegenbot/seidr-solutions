```
def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for char in text:
        if char.isalpha() and char.lower() in cipher_text1:
            index = cipher_text1.index(char.lower())
            deciphered_text += cipher_text2[index].upper()
        else:
            deciphered_text += char
    return deciphered_text