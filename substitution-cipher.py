def decrypt_message(cipher1, cipher2, message):
    char_map_lowercase = {}
    char_map_uppercase = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map_lowercase[c1] = c2
            char_map_uppercase[c1.upper()] = c2.upper()
    result = ""
    for char in message:
        if char.isalpha():  
            if char.islower():
                if char in char_map_lowercase:
                    result += char_map_lowercase.get(char, char)
            else:
                if char in char_map_uppercase:
                    result += char_map_uppercase.get(char, char)
        else:
            result += char
    return result