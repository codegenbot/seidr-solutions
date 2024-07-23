def substitution_cipher():
    cipher_map = str(input())
    text_to_decrypt = str(input())
    decrypted_text = ""

    for char in text_to_decrypt:
        if char in cipher_map:
            if char in decrypted_text:
                index = (decrypted_text.rindex(char) + 1) % len(cipher_map)
            else:
                index = cipher_map.index(char) % len(cipher_map)
            decrypted_text += cipher_map[index]
        else:
            decrypted_text += char

    return decrypted_text