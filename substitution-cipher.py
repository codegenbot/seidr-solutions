def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = {cipher_text1[i].lower(): cipher_text2[i].lower() for i in range(len(cipher_text1))}
    deciphered_message = "".join([cipher.get(char.lower(), char) for char in message])
    return deciphered_message