def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for i, (c1, c2) in enumerate(zip(cipher1.lower(), cipher2.lower())):
        if c1.isalpha():
            char_map[c1] = c2

    result = ""
    for char in message:
        if char.isalpha():  
            if char.isupper() and char.lower() in char_map:  
                result += (char_map[char.lower()].upper() if char.isupper() 
                           else char_map[char.lower()])
            elif char.lower() in char_map:  
                result += (char_map[char.lower()] if char.isupper() 
                           else char_map[char.lower()].lower())
        else:
            result += char

    return result