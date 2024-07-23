```
def substitution_cipher():
    cipher_map = input().split(' ')
    text_to_decrypt = input()
    decrypted_text = ""

    for char in text_to_decrypt:
        if char in cipher_map[0]:
            index = cipher_map[0].index(char)
            decrypted_text += cipher_map[1][index]
        else:
            decrypted_text += char

    return decrypted_text