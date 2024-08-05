def substitution_cipher(encode_str, decode_str, message):
    result = ""
    for char in message:
        if char in encode_str:
            index = encode_str.index(char)
            result += decode_str[index]
        else:
            result += char
    return result