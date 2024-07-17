def substitution_cipher():
    cipher_key = input().strip()
    text_to_decrypt = input().strip()
    decrypted_text = ""
    for char in text_to_decrypt:
        if char in cipher_key:
            index = (cipher_key.index(char) + 1) % len(cipher_key)
            decrypted_text += cipher_key[index]
        else:
            decrypted_text += char
    return decrypted_text


print(substitution_cipher())