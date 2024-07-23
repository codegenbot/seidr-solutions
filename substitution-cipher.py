def substitution_cipher():
    cipher_map = str(input())
    text_to_decrypt = str(input())
    map_key = cipher_map[:len(cipher_map) // 2]
    reverse_cipher_map = cipher_map[len(cipher_map) // 2:]

    decrypted_text = ""

    for char in text_to_decrypt:
        if char in map_key:
            index = map_key.index(char)
            decrypted_text += reverse_cipher_map[index]
        else:
            decrypted_text += char

    return decrypted_text