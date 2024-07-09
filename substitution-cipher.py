def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {chr(ord(char1) - ord('a') + ord(char2.lower()) - ord('a')): char2.lower() for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            diff = ord(cipher_dict.get(char.lower(), char).lower()) - ord('a')
            if char.isupper():
                result += chr(ord(char) - ord('A') + diff)
            else:
                result += cipher_dict.get(char, char)
        else:  
            result += char
    return result