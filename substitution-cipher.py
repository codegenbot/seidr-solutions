def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    return "".join(
        [
            cipher_text2[i]
            for i in range(len(text_to_decrypt))
            if i < len(cipher_text1) and text_to_decrypt[i] == cipher_text1[i]
        ]
    )