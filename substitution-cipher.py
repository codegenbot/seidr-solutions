def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        for i in range(len(cipher1)):
            if cipher1[i] == char:
                result += cipher2[i]
                break
    return result