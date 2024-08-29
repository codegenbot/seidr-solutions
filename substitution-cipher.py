def substitution_cipher():
    cipher = [chr(i) for i in range(ord("a"), ord("z") + 1)]
    text = input().split()
    deciphered_text = "".join(
        [cipher.index(c) + 97 if c.isalpha() else c for c in text[2]]
    )
    return deciphered_text


print(substitution_cipher())