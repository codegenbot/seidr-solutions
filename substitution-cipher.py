def substitution_cipher(cipher1, cipher2, message):
    result = ''
    for i in range(max(len(cipher1), len(cipher2))):
        char = chr(ord(message[i % len(message)]))
        if char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += '?'  
    return result