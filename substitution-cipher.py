def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map[c1] = c2
    result = ""
    for char in message:
        if char.isalpha():  
            c1 = char.lower()
            if c1 in char_map:  
                result += char_map[c1]
                if c1.isupper() and not result[-1].isupper():
                    result += result[-1].upper()
        else:
            result += char
    return result