def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher_map = {cipher_text1[i]: cipher_text2[i] for i in range(len(cipher_text1))}
    deciphered_message = "".join([cipher_map.get(char, char) for char in message])
    return deciphered_message