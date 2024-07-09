def substitution_cipher(cipher_map, message):
    return "".join([cipher_map[message[i]] if i < len(message) else "" for i in range(len(message))])


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher2, cipher1) + substitution_cipher(cipher2, message))