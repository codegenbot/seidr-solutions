def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map[c1] = c2

    result = ""
    for char in message:
        if char.isalpha():  
            if char.lower() in char_map:  
                result += (char_map[char.lower()] if char.isupper() else 
                           char_map[char.lower()].lower())
            else:  
                result += char
        else:  
            result += char

    return result