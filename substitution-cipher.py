def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char: char2.lower() for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += cipher_dict.get(char, char)
            else:
                result += ({k:v.upper() for k,v in cipher_dict.items()}).get(char.lower(), char).upper()
        else:  
            result += char
    return result