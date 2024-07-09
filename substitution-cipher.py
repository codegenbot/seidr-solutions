def substitution_cipher(cipher1, cipher2, message):
    alphabetic_dict = {char: cipher2[i].lower() for i, char in enumerate(cipher1) if char.isalpha()}
    non_alphabetic_chars = ''.join(char for char in cipher1 if not char.isalpha())

    result = ''
    for char in message:
        if char.isalpha():
            result += alphabetic_dict.get(char.lower(), char)
        else:
            result += next((c for c in non_alphabetic_chars if c == char), char)

    return result