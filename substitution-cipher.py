def substitution_cipher():
    cipher_map = input().split(" ")
    text_to_decrypt = str(input())
    decrypted_text = ""
    map_dict = {cipher_map[0][i]: cipher_map[1][i] for i in range(len(cipher_map[0]))}

    for char in text_to_decrypt:
        if char in map_dict:
            decrypted_text += map_dict[char]
        else:
            decrypted_text += char

    return decrypted_text