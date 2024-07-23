def substitution_cipher():
    cipher_map = input().split()
    text_to_decrypt = input()
    mapping = {}
    for i in range(len(cipher_map) // 2):
        key, value = cipher_map[2*i], cipher_map[2*i+1]
        mapping[key] = value
    decrypted_text = ""
    for char in text_to_decrypt:
        if char in mapping:
            decrypted_text += mapping[char]
        else:
            decrypted_text += char
    return decrypted_text