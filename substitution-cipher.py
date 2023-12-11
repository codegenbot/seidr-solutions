def cipher(ciphertext, key):
    return ''.join([key[ord(c) - ord('a')] for c in ciphertext])

def decipher(ciphertext, key):
    return ''.join([chr(ord(k) + ord('a')) for k in ciphertext])