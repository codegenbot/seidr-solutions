def substitution_cipher(input_strings):
    cipher_map = str.maketrans(input_strings[0], input_strings[1])
    return input_strings[2].translate(cipher_map)