def substitution_cipher():
    cipher_key = input().strip()
    text_to_decrypt = input().strip()
    result = ""
    for char in text_to_decrypt:
        if char in cipher_key:
            index = (cipher_key.index(char) % len(cipher_key))
            result += cipher_key[index]
        else:
            result += char
    return result


print(substitution_cipher())