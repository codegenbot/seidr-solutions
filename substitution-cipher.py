def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(min(len(cipher1), len(cipher2))):
        if cipher1[i] not in cipher:
            cipher[cipher1[i]] = cipher2[i]
        if cipher2[i] not in cipher:
            cipher[cipher2[i]] = cipher1[i]

    result = ''
    for char in message:
        if char.isalpha():  
            key = char.upper() if char.isupper() else char.lower()
            if key in cipher:  
                result += cipher[key].upper() if char.isupper() else cipher[key].lower()
            else:  
                result += char
        else:  
            result += char
    return result