```python
def decrypt_message(cipher1, cipher2, message):
    char_map = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            char_map[c1] = c2
            char_map[c1.upper()] = c2.upper()
    result = ""
    for char in message:
        if char.isalpha():  
            char_lower = char.lower()
            if char_lower in char_map:
                if char.isupper():
                    result += char_map[char_lower].upper()
                else: 
                    result += char_map[char_lower]
            else:
                result += char
        else:
            result += char
    return result