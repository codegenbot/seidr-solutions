```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for a, b in zip(cipher1, cipher2):
        if a not in cipher:
            cipher[a] = b
        if b not in cipher:
            cipher[b] = a

    result = ''
    for char in message:
        if char.isalpha():  
            if char.isupper():
                result += cipher.get(char.upper(), char).upper()  
            else:
                result += cipher.get(char.lower(), char).lower()
        else:  
            result += char
    return result