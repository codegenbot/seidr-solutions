def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for char in text:
        if char.isalpha():  
            index = cipher_text1.index(char)
            deciphered_text += cipher_text2[index]
        else:  
            deciphered_text += char
    return deciphered_text