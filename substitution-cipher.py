def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        if len(cipher1) > len(cipher2):
            cipher = {}
            for i in range(len(cipher2)):
                if cipher2[i] not in cipher:
                    cipher[cipher2[i]] = cipher1[i]
            for i in range(len(cipher1)-len(cipher2), len(cipher1)):
                if cipher1[i] not in cipher:
                    cipher[cipher1[i]] = ''
        else:
            cipher = {}
            for i in range(min(len(cipher1), len(cipher2))):
                if cipher1[i] not in cipher:
                    cipher[cipher1[i]] = cipher2[i]
                if cipher2[i] not in cipher:
                    cipher[cipher2[i]] = cipher1[i]

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