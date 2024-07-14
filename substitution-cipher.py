```
def substitution_cipher(cipher1, cipher2, message):
    char_map = {char1: char2 for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char in char_map:
            result += list(char_map.keys())[list(char_map.values()).index(char)]
        else:
            result += char
    return result