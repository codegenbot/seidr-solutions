```
def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return str(len(cipher1)) + " " + str(len(cipher2))

    cipher = {}
    for i in range(min(len(cipher1), len(cipher2))):
        if cipher1[i] not in cipher:
            cipher[cipher1[i]] = cipher2[i]
        else:
            return "Error: The cipher map is not one-to-one."

    result = ''
    for char in message:
        if char.isalpha():  
            if char.isupper():
                result += chr((ord(char) - 65) + (cipher.get(char, char).ord() - 65))  
            else:
                result += chr((ord(char) - 97) + (cipher.get(char, char).ord() - 97))
        else:  
            result += char
    return result