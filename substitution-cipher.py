def substitution_cipher(cipher_keys, cipher_values, message):
    result = ""
    for char in message:
        if char in cipher_keys:
            result += cipher_values[cipher_keys.index(char)]
        else:
            result += char
    return result