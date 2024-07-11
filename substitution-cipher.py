def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return "Error: Both strings must have the same length."

    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]

    result = ""
    for char in message:
        char = cipher.get(char, char)
        if char.isalpha():
            if char.isupper():
                result += char.upper()
            else:
                result += char.lower()
        else:
            result += char
    return result