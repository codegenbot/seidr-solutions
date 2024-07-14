```
def substitution_cipher(cipher1, cipher2, message)::
    mapping = {c2: c for c, c2 in zip(cipher1.lower(), cipher2.lower())}
    
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper(): 
                result += mapping[char.lower()].upper() 
            else: 
                result += mapping[char.lower()]
        else: 
            result += char
    
    return result