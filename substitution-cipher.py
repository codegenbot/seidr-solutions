```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for char in range(len(cipher1)):
        if cipher1[char] != cipher2[char]:
            mapping[cipher1[char]] = cipher2[char]
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result