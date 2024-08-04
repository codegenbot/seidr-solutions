def substitution_cipher(cipher_map, text):
    return "".join(
        [cipher_map[i] if i < len(cipher_map) else "" for i in range(len(text))]
    )


text = input().strip()
cipher1 = input().strip()
cipher2 = input().strip()

print(substitution_cipher(cipher1, text))