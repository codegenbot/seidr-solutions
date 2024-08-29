def substitution_cipher(cipher1, cipher2, text):
    cipher_dict = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    deciphered_text = "".join(
        [cipher_dict[char] if char in cipher_dict else char for char in text]
    )
    return deciphered_text