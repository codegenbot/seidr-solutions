def substitution_cipher(cipher1, cipher2, message):
    cipher = str()
    for i in range(len(cipher1)):
        if cipher1[i] == cipher2[i]:
            cipher += cipher1[i]
        else:
            cipher += cipher1[i].replace(cipher1[i], cipher2[i])
    return cipher