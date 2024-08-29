def substitution_cipher(cipher_string1, cipher_string2, message):
    cipher_map = {
        cipher_string1[i]: cipher_string2[i]
        for i in range(min(len(cipher_string1), len(cipher_string2)))
    }
    return "".join([cipher_map.get(char, char) for char in message])