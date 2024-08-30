def substitution_cipher(encode_map, decode_map, text):
    result = ""
    for char in text:
        if char in encode_map:
            index = encode_map.index(char)
            result += decode_map[index]
        else:
            result += char
    return result