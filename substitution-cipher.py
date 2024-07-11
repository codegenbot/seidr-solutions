```
def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return 

    upper_cipher = {}
    lower_cipher = {}

    for i in range(len(cipher1)):
        upper_cipher[cipher1[i].upper()] = cipher2[i].upper()
        lower_cipher[cipher1[i].lower()] = cipher2[i].lower()

    result = ''
    for char in message:
        if char.isalpha():  
            if char.isupper():
                result += upper_cipher.get(char, char)  
            else:
                result += lower_cipher.get(char, char)
        else:  
            result += char
    return result