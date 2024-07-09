def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char.lower(): char2.lower() for i, (char, char2) in enumerate(zip(cipher1, cipher2))}
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += cipher_dict.get(char, char)
            else:
                result += cipher_dict.get(char.lower()).upper()
        else:
            result += char
    return result