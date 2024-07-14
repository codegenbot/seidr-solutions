```
def decrypt_message(cipher1, cipher2, message):
    char_map_lower = {}
    char_map_upper = {}
    
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map_lower[c1] = c2

    for c1, c2 in zip([c.upper() for c in cipher1], [c.upper() for c in cipher2]):
        if c1.isalpha():
            char_map_upper[c1] = c2

    result = ""
    for char in message:
        if char.isalpha():  
            if char.lower() in char_map_lower:  
                result += (char_map_lower[char.lower()] if char.isupper() else 
                           char_map_lower[char.lower()].lower())
            elif char.upper() in char_map_upper:  
                result += (char_map_upper[char.upper()] if char.islower() else 
                           char_map_upper[char.upper()].upper())
            else:  
                result += char
        else:  
            result += char

    return result