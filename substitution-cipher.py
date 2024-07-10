def substitution_cipher(cipher_map, message):
    deciphered_message = ""
    for char in message:
        if char in cipher_map[0]:
            index = cipher_map[0].index(char)
            deciphered_message += cipher_map[1][index]
        else:
            deciphered_message += char
    return deciphered_message


# Read input from user
cipher_map1 = list(input().strip())
cipher_map2 = list(input().strip())
message = input().strip()

print(substitution_cipher([cipher_map1, cipher_map2], message))