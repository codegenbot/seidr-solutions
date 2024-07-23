def substitution_cipher():
    cipher_map = str(input())
    text_to_decrypt = str(input())
    mapping_dict = {k: v for k, v in zip(cipher_map, cipher_map)}
    decrypted_text = ""

    for char in text_to_decrypt:
        if char in mapping_dict:
            decrypted_text += list(mapping_dict.keys())[list(mapping_dict.values()).index(char)]
        else:
            decrypted_text += char

    return decrypted_text