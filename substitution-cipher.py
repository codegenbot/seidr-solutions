def substitution_cipher(cipher_map, text):
    return "".join(
        [cipher_map[i] if i < len(cipher_map) else "" for i in range(len(text))]
    )


cipher_map = input().strip()
text = input().strip()
print(substitution_cipher(cipher_map, input().strip()))