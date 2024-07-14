```
def substitution_cipher(cipher1, cipher2, message):
    uppercase_mapping = {c: c2 for c, c2 in zip(cipher1.upper(), cipher2.upper())}
    lowercase_mapping = {c: c2 for c, c2 in zip(cipher1.lower(), cipher2.lower())}
    mapping = {}
    for k, v in uppercase_mapping.items():
        mapping[k] = v
        mapping[k.lower()] = v.lower()
    
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper(): 
                result += mapping[char].upper() 
            else: 
                result += mapping[char]
        else: 
            result += char
    
    return result