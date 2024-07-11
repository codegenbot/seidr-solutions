```
def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return "Error: Both strings must have the same length."

    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]

    result = ''
    for char in message:
        if char.isalnum():
            if char.isalpha():  
                if char.isupper():
                    result += chr((ord(char) - 65) + (cipher.get(char.lower(), char).lower().ord() - 65))  
                else:
                    result += chr((ord(char) - 97) + (cipher.get(char, char).ord() - 97))
            else:  
                if char.isnumeric():
                    for k, v in cipher.items():
                        if str(v).isalpha():
                            index = int(str(v)) if ord(k) > 96 else int(str(v.lower())) * 2
                            result += chr(index + 96)
                            break
        else:  
            result += char
    return result