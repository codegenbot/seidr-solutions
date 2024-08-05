```
def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    decrypted_text = ""
    for char in text_to_decrypt:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            decrypted_text += cipher_text2[index]
        else:
            decrypted_text += char
    return decrypted_text