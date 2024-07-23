def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    cipher_dict = {cipher_text1[i]: cipher_text2[i] for i in range(len(cipher_text1))}
    decrypted_text = "".join(
        [
            cipher_dict[character] if character in cipher_dict else character
            for character in text_to_decrypt
        ]
    )
    return decrypted_text