```
def substitution_cipher():
    cipher_map = input().split(' ')
    mapping = {}
    for i in range(0, len(cipher_map), 2):
        mapping[cipher_map[i]] = cipher_map[i+1]

    text_to_decrypt = input()
    decrypted_text = ""

    for char in text_to_decrypt:
        if char in mapping:
            decrypted_text += mapping[char]
        else:
            decrypted_text += char

    return decrypted_text