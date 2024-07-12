```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {}
    for i in range(min(len(cipher1), len(cipher2))):
        cipher[cipher1[i]] = cipher2[i]
    result = ""
    for char in message:
        if char in cipher:
            result += cipher[char]
        else:
            result += char
    return result