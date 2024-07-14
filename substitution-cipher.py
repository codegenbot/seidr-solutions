def substitution_cipher(cipher1, cipher2, message):
    mapping = {c: c2 for c, c2 in zip(cipher1.lower(), cipher2.lower())}
    
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper(): 
                result += mapping[char.lower()].upper() 
            else: 
                result += mapping.get(char.lower(), char)
        else: 
            result += char
    
    return result