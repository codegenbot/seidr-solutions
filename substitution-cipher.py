def decipher_ciphertext(ciphertext):
    cipher_map = [0] * 256
    for i in range(2):
        for c1, c2 in zip(input(), input()):
            cipher_map[ord(c1)] = ord(c2)

    plaintext = ""
    for c in input():
        plaintext += chr(cipher_map[ord(c)])

    return plaintext


print(decipher_ciphertext())