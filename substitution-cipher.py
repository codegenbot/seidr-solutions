def substitute_cipher(cipher_map, message):
    deciphered_message = ""
    for char in message:
        if char in cipher_map[0]:
            index = cipher_map[0].index(char)
            deciphered_message += cipher_map[1][index]
        else:
            deciphered_message += char
    return deciphered_message


cipher_map = input().split()
message = input()

print(substitute_cipher(map(str.split, [cipher_map]), message))