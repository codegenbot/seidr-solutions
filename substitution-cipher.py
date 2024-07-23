def substitution_cipher():
    cipher_map = str(input())
    text_to_decrypt = str(input())
    decrypted_text = ""

    for char in text_to_decrypt:
        if char in cipher_map:
            index = cipher_map.index(char)
            decrypted_text += cipher_map[index // len(cipher_map)]
        else:
            decrypted_text += char

    return decrypted_text