```
def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c2, c1 in zip(cipher2.lower(), cipher1.lower()):
        if c1.isalpha():
            char_map[c1] = c2

    result = ""
    for char in message:
        if char.isalpha():  
            if char.isupper() and char.lower() in char_map:  
                result += char_map[char.lower()].upper()
            elif char.lower() in char_map:  
                result += char_map[char.lower()]
        else:
            result += char

    return result