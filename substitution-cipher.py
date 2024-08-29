```
def decipher_cipher(cipher_string1, cipher_string2, message):
    cipher_map = {}
    for i in range(len(cipher_string1)):
        if cipher_string1[i] != cipher_string2[i]:
            continue
        cipher_map[cipher_string1[i]] = cipher_string2[i]

    deciphered_message = ""
    for char in message:
        if char in cipher_map:
            deciphered_message += cipher_map[char]
        else:
            deciphered_message += char

    return deciphered_message