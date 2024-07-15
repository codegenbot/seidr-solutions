```
def substitution_cipher(cipher_string1, cipher_string2, message):
    if len(cipher_string1) != len(cipher_string2):
        return ""
    cipher_map = {char: cipher_string2[i] for i, char in enumerate(cipher_string1)}
    deciphered_message = ""
    for char in message:
        if char.isalpha() and (char.lower() in cipher_map or char.upper() in cipher_map):
            deciphered_char = cipher_map.get(char.lower(), char).upper() if char.isupper() else cipher_map.get(char.lower(), char)
            deciphered_message += deciphered_char
        else:
            deciphered_message += char
    return deciphered_message