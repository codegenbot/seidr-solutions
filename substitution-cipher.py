cipher_map, message = input().split(maxsplit=1)
cipher_map = cipher_map[0].split()
print(substitution_cipher([cipher_map[0], cipher_map[1]], message.strip()))