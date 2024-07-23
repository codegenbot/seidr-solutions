```
def substitution_cipher():
    cipher_map = str(input())
    text_to_decrypt = str(input())
    map_dict = {}
    
    for i in range(0, len(cipher_map), 2):
        map_dict[cipher_map[i]] = cipher_map[i+1]
        
    decrypted_text = ""

    for char in text_to_decrypt:
        if char in map_dict:
            decrypted_text += map_dict[char]
        else:
            decrypted_text += char

    return decrypted_text