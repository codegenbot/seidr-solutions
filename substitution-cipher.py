def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    rev_char_map = {}

    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map[c1] = c2
            rev_char_map[c2] = c1

    result = ""
    for char in message:
        if char.isalpha():  
            if char.isupper() and char.lower() in char_map:  
                result += rev_char_map[char.lower()].upper()
            elif char.lower() in char_map:  
                result += char_map[char.lower()]
        else:
            result += char
    return result