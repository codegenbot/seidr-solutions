```
def substitution_cipher(cipher_string1, cipher_string2, message):
    if len(cipher_string1) != len(cipher_string2):
        return ""
    cipher_map = {cipher_string1[i]: cipher_string2[i] for i in range(len(cipher_string1))}
    deciphered_message = ""
    for char in message:
        deciphered_message += cipher_map.get(char, char)
    return deciphered_message