def substitution_cipher():
    cipher_map = str(input()).split()
    mapping_dict = {}
    for i in range(0, len(cipher_map), 2):
        key, value = cipher_map[i], cipher_map[i+1]
        mapping_dict[key] = value
    text_to_decrypt = str(input())
    decrypted_text = ""
    for char in text_to_decrypt:
        if char in mapping_dict:
            decrypted_text += mapping_dict[char]
        else:
            decrypted_text += char
    return decrypted_text