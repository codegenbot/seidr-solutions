def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = ""
    for char in text:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered += cipher_text2[index]
        else:
            deciphered += char
    return deciphered

print(substitution_cipher("your_cipher_text1", "your_cipher_text2", "your_input_text"))