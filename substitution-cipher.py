Here is the solution:

def substitution_cipher(cipher_map, message):
    return ''.join([cipher_map[i] if i < len(cipher_map) else '' for i in range(len(message))])

cipher = input().strip()
map_cipher = cipher[:len(cipher)//2]
decode_cipher = cipher[len(cipher)//2:]
print(substitution_cipher(map_cipher, decode_cipher))
