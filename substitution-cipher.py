```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i].lower()] = cipher2[i].lower()
    result = ''
    for char in message.lower():
        if char in cipher:
            result += cipher[char]
        else:
            result += char
    return result