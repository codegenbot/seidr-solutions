```
def substitution_cipher():
    cipher_map = str(input())
    text_to_decrypt = str(input())
    decrypted_text = ""

    map_list = [i for i in zip(*[list(cipher_map[i:i+2]) for i in range(0, len(cipher_map), 2)]])
    
    for char in text_to_decrypt:
        if char in cipher_map:
            for pair in map_list:
                if char in pair:
                    decrypted_text += ''.join(pair).replace(char,'')
                    break
        else:
            decrypted_text += char

    return decrypted_text