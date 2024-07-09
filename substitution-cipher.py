```
def substitution_cipher(cipher_map_key, cipher_map_value, message):
    return "".join([cipher_map_value[cipher_map_key[i]] if i < len(cipher_map_key) else "" for i in range(len(message))])


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher2, cipher1, message))