```
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    i = j = 0
    while i < len(message):
        if j < len(cipher1) and message[i] == cipher1[j]:
            result += cipher2[j]
            j += 1
        else:
            result += message[i]
        i += 1
    return result