def substitution_cipher(ciphertext, key):
    plaintext = ""
    for i in range(len(ciphertext)):
        plaintext += chr((ord(ciphertext[i]) - ord(key[i])) % 26 + ord('A'))
    return plaintext
