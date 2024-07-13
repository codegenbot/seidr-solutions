def substitution_cipher(encode_str, decode_str, message):
    cipher = str.maketrans(encode_str, decode_str)
    return message.translate(cipher)


# Read input from user
encode_str = input()
decode_str = input()
message = input()

print(substitution_cipher(encode_str, decode_str, message))