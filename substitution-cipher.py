```
def substitution_cipher(cipher1, cipher2, text):
    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]
    result = ""
    for char in text:
        if char in cipher:
            result += cipher[char]
        else:
            result += char
    return result