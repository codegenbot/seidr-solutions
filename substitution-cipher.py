def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {chr(ord(char1.lower()) - ord('a') + ord(char2.lower()) - ord('a')): char2 for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            mapped_char = cipher_dict.get(char.lower(), char)
            if char.isupper():
                result += mapped_char.upper()
            else:
                result += mapped_char
        else:  
            result += char
    return result