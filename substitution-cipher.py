def decipher_cipher(cipher1, cipher2, message):
    deciphered_message = ""
    for char in message:
        index = ord(char) - ord("a")
        deciphered_message += cipher2[index]
    return deciphered_message