```
def substitution_cipher(cipher1, cipher2, text):
    deciphered_text = ""
    for char in text:
        if char in cipher1:
            index = cipher1.index(char)
            deciphered_text += cipher2[index]
        else:
            deciphered_text += char
    return deciphered_text