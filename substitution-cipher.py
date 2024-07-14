def decrypt_message(cipher1, cipher2, message):
    char_map_lower = {}
    char_map_upper = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            if c1.islower():
                char_map_lower[c1] = c2
            else:
                char_map_upper[c1] = c2

    result = ""
    for char in message:
        if char.isalpha():  
            if char.islower():
                if char in char_map_lower:  
                    result += char_map_lower[char]
                else:  
                    result += char
            else:
                if char in char_map_upper:  
                    result += char_map_upper[char]
                else:  
                    result += char
        else:  
            result += char

    return result