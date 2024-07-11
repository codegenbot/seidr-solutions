```
def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return "Error: Both strings must have the same length."

    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr(ord('A' if char.isupper() else 'a') + (cipher.get(char.lower(), char).ord() - ord('a')))
            else:
                result += char
        else:
            result += char
    return result