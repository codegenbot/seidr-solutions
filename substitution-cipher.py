def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        return "Error: Both strings must have the same length."

    cipher = {}
    for i in range(len(cipher1)):
        cipher[cipher1[i]] = cipher2[i]

    result = ""
    for char in message:
        if char.isalpha():
            shift = 65 if char.isupper() else 97
            result += chr(
                (
                    ord(char)
                    - shift
                    + (
                        cipher.get(
                            char.upper() if char.isupper() else char.lower(), char
                        ).ord()
                        - shift
                    )
                )
            )
        else:
            result += char
    return result