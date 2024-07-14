```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = cipher2.lower().index(char.lower()) 
            result += cipher1[index].upper() if char.isupper() else cipher1[index]
        else:
            result += char
    return result