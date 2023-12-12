def apply_cipher(cipher, message):
    deciphered = ""
    for i in range(len(message)):
        deciphered += cipher[ord(message[i]) - ord('a')]
    return deciphered
