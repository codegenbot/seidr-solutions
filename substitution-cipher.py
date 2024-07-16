def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = ""
    for char in text:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered += cipher_text2[index]
        else:
            deciphered += char
    return deciphered

cipher_text1 = input("Enter the first cipher string: ")
cipher_text2 = input("Enter the second cipher string: ")
text = input("Enter the text to be decrypted: ")

print(substitution_cipher(cipher_text1, cipher_text2, text))