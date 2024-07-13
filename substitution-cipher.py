```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for i in range(len(message)):
        if i < len(cipher1) and i < len(cipher2):
            if cipher1[i] == message[i]:
                result += cipher2[i]
            else:
                result += message[i]
        else:
            result += message[i]
    return result