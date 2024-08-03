def substitution_cipher():
    cipher_map = [c for c1, c2 in zip(input(), input())]
    message = input()
    deciphered_message = ''.join([c for c, c_map in zip(message, cipher_map) if c_map.isalpha() else c])
    return deciphered_message

print(substitution_cipher())