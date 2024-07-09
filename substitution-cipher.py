def substitute_cipher(cipher_string1, cipher_string2, message):
    cipher = {}
    for char in range(len(cipher_string1)):
        if cipher_string1[char] != cipher_string2[char]:
            cipher[cipher_string1[char]] = cipher_string2[char]
    deciphered_message = ""
    for char in message:
        if char in cipher:
            deciphered_message += cipher[char]
        else:
            deciphered_message += char
    return deciphered_message