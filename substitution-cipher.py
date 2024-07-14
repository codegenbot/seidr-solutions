```
def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map[c1] = c2
            char_map[c1.upper()] = c2.upper()
            char_map[c1.swapcase()] = c2.swapcase() 
    result = ""
    for char in message:
        if char.isalpha():  
            char_lower = char.lower()
            result += char_map.get(char_lower, char).lower() if char.islower() else char_map.get(char_lower, char).upper()
        else:
            result += char
    return result