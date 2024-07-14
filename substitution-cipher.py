def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher2:  
            index = cipher2.find(char)
            result += cipher1[index]
        else:
            result += char
    return result