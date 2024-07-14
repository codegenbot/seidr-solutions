def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {k: v for k, v in zip(cipher2, cipher1)}
    result = ""
    for char in message:
        if char in cipher_dict:
            result += cipher_dict[char]
        else:
            result += char
    return result