def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message.lower():
        if char != ' ':  
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += char
    return result