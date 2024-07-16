def substitution_cipher(key1, key2, message):
    result = ""
    for char in message:
        if char.isalpha():
            orig_case = char.isupper()
            result_char = key2.get(char.lower(), char).lower() if orig_case else key2.get(char, char).upper()
            result += result_char
        else:
            result += char
    return result