```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i].lower()] = cipher2[i].lower()
    result = ''
    for char in message:
        if char.lower() in cipher:
            result += cipher[char.lower()]
        else:
            result += char
    return result