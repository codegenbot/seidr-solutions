def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    if cipher1.islower():
        for i in range(len(cipher1)):
            cipher[cipher1[i]] = cipher2[i]
    else:
        for i in range(len(cipher1)):
            cipher[cipher1[i].upper()] = cipher2[i].upper()
    result = ''
    for char in message:
        if char.isalpha() and char.lower() in cipher:
            result += cipher[char.lower()].upper() if char.isupper() else cipher[char.lower()]
        else:
            result += char
    return result