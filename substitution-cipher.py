def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}
    deciphered_message = "".join(
        [cipher_dict[char] if char in cipher_dict else char for char in message]
    )
    return deciphered_message