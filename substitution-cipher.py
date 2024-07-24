def substitution_cipher(cipher_map, message):
    deciphered = ""
    for char in message:
        if char in cipher_map[0]:
            index = cipher_map[0].index(char)
            deciphered += cipher_map[1][index]
        else:
            deciphered += char
    return deciphered


cipher_map = [input(), input()]
message = input()
print(substitution_cipher(cipher_map, message))