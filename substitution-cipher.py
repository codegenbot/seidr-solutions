def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return "Error: Both strings must have the same length."

    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i].lower()] = cipher2[i].lower()

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr(ord('A') + (cipher[char.lower()].ord() - ord('a')))
            else:
                result += cipher.get(char, char)
        else:
            result += char
    return result