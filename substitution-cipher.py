def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered = ""
    for char in text:
        for i in range(len(cipher_text1)):
            if char == cipher_text1[i]:
                deciphered += cipher_text2[i]
    return deciphered