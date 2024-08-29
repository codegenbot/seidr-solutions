def decipher_cipher(cipher_key1, cipher_key2, message):
    key = {
        cipher_key1[i]: cipher_key2[i]
        for i in range(min(len(cipher_key1), len(cipher_key2)))
    }
    return "".join(key.get(char) if char in key else char for char in message)