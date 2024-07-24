def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = {
        cipher_text1[i]: cipher_text2[i]
        for i in range(min(len(cipher_text1), len(cipher_text2)))
    }
    deciphered_message = "".join([cipher.get(char, char) for char in message])
    return deciphered_message