def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {
        char: cipher2[i].lower() if char.isalpha() else char
        for i, char in enumerate(cipher1)
    }
    result = "".join([cipher_dict.get(char.lower(), char) if char.isalnum() else ' ' for char in message])
    return result