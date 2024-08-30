def substitution_cipher(cipher1, cipher2, message):
    min_len = min(len(cipher1), len(cipher2))
    cipher_dict = {cipher1[i]: cipher2[i] for i in range(min_len)}
    deciphered_message = "".join([cipher_dict.get(char, char) for char in message])
    return deciphered_message