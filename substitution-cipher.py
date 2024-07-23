def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message.lower():
        if char.isalpha():  
            if char in cipher1:
                index = cipher1.index(char)
                result += cipher2[index].lower()  
            else:
                result += char
        else:  
            result += char
    return result