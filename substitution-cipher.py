def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char1: char2 for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            result += cipher_dict.get(char.lower(), char).swapcase()
        else:
            result += char
    return result