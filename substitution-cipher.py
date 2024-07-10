````
def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(min(len(cipher1), len(cipher2))):
        cipher[cipher1[i]] = cipher2[i]
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