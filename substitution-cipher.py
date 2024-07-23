```
def substitution_cipher():
    cipher_map = str(input())
    text_to_decrypt = str(input())
    map_list = list(cipher_map)
    map_key, map_value = zip(*[x.split() for x in [cipher_map[i:i+2] for i in range(0,len(cipher_map), 2)]])
    
    decrypted_text = "".join([map_value[map_list.index(char)] if char in map_list else char for char in text_to_decrypt])
    
    return decrypted_text