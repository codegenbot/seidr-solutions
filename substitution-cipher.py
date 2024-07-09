def decipher_message(key1, key2, message):
    key1 = key1.lower()
    key2 = key2.lower()
    
    cipher_dict = {k: v for k, v in zip(key1, key2)}
    
    result = ""

    for char in message:
        if char.isalpha():
            result += (
                cipher_dict.get(char.lower(), char).upper()
                if char.isupper()
                else cipher_dict.get(char.lower(), char)
            )
        else:
            result += char

    return result