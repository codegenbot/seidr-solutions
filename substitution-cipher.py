def substitution_cipher(cipher1, cipher2, message):
    result = ''
    for i in range(len(message)):
        char = message[i % len(message)]
        if char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += '?'  
    return result