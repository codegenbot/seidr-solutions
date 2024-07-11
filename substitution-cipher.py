```
def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return ""

    cipher = {cipher1[i]: cipher2[i] for i in range(len(cipher1))}

    result = ""
    for char in message:
        if char.isalpha():
            char_upper = char.upper()
            char_lower = char.lower()

            if char_upper[0] == char:
                result += cipher.get(char, char).upper() if cipher.get(char, char).isalpha() else cipher.get(char, char)
            elif char_lower[0] == char:
                result += cipher.get(char, char).lower() if cipher.get(char, char).isalpha() else cipher.get(char, char)
            else:
                result += cipher.get(char, char)
        else:
            result += char

    return result