def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char: char2 for char, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char in cipher_dict:
            result += cipher_dict[char]
        else:
            result += char
    return result