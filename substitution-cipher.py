def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    decrypted_text = ""
    for char in text_to_decrypt:
        for i in range(len(cipher_text1)):
            if cipher_text1[i] == char.lower():
                decrypted_text += cipher_text2[i].lower()
            elif cipher_text1[i].upper() == char.upper():
                decrypted_text += cipher_text2[i].upper()
    return decrypted_text