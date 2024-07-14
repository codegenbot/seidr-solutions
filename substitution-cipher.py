```
def decrypt_message(cipher1, cipher2, message):
    char_map = {c1: c2 for c1, c2 in zip(cipher1.lower(), cipher2.lower())}
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += char_map[char.lower()].upper()
            else:
                result += char_map.get(char, char)
        else:
            result += char
    return result