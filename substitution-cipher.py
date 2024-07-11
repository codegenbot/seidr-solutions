def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return 

    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]

    result = ''
    for char in message:
        if char.isalpha():  
            if char.isupper():
                result += chr((ord(char.lower()) - 97) + (cipher.get(char.lower(), char).lower().ord() - 97))  
            else:
                result += chr((ord(char.lower()) - 97) + (cipher.get(char.lower(), char).lower().ord() - 97))
        else:  
            result += char
    return result