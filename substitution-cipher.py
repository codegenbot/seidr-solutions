```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]
    
    result = ''
    for char in message:
        if char.isalpha():  
            result += cipher[char].upper() if char.isupper() else cipher[char].lower()
        else:  
            result += char
    
    return result