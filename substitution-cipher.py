def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char: cipher2[i] for i, char in enumerate(cipher1)}
    result = ""
    for char in message:
        if char in cipher_dict:
            result += cipher_dict[char]
        else:
            result += char
    return result