def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {cipher1[i].lower(): cipher2[i].lower() for i in range(len(cipher1))}
    deciphered_message = "".join([cipher_dict.get(char.lower(), char) for char in message])
    return deciphered_message