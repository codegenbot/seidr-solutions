def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char: char2 for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += cipher_dict.get(char, char).lower()
            else:
                result += cipher_dict.get(char.lower(), char).upper()
        else:  
            result += char
    return result