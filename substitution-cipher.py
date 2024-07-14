```
def substitution_cipher(cipher1, cipher2, message):
    char_map = {char1: char2 for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char in list(char_map.keys()):
            for key, value in char_map.items():
                if value == char:
                    result += key
                    break
        else:
            result += char
    return result