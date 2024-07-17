def substitution_cipher(cipher_map, message):
    deciphered_message = ""
    for char in message:
        if char in cipher_map[0]:
            deciphered_message += cipher_map[1][cipher_map[0].index(char)]
        else:
            deciphered_message += char
    return deciphered_message


# Read input from user
cipher_map = [input(), input()]
message = input()

print(substitution_cipher(cipher_map, message))