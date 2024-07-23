def substitution_cipher():
    cipher_map = list(input())
    text_to_decrypt = str(input())
    mapping_key = []
    mapping_value = []

    for i in range(0, len(cipher_map), 2):
        mapping_key.append(cipher_map[i])
        mapping_value.append(cipher_map[i + 1])

    decrypted_text = ""

    for char in text_to_decrypt:
        if char in mapping_key:
            index = mapping_key.index(char)
            decrypted_text += mapping_value[index]
        else:
            decrypted_text += char

    return decrypted_text