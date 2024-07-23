def substitution_cipher():
    input_string = str(input()).split('\n')
    cipher_map = dict(zip(input_string[0], input_string[1]))
    text_to_decrypt = str(input())
    decrypted_text = ""

    for char in text_to_decrypt:
        if char in cipher_map:
            decrypted_text += cipher_map[char]
        else:
            decrypted_text += char

    return decrypted_text