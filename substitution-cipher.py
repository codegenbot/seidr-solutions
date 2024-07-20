def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        print("Warning: cipher strings are not the same length")
    cipher_map = {k:v for k,v in zip(cipher1.lower(), cipher2.lower())}
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            deciphered_message += cipher_map.get(char.lower(), char)
        else:
            deciphered_message += char
    return deciphered_message