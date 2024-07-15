def substitution_cipher(cipher_string1, cipher_string2, message):
    if len(cipher_string1) != len(cipher_string2):
        return ""
    cipher_map = {k.lower(): v for k, v in zip(map(str, cipher_string1), map(str, cipher_string2))}
    deciphered_message = "".join([cipher_map.get(char.lower(), char) if char.isalpha() else char for char in message])
    return deciphered_message