def substitution_cipher(cipher, text):
    deciphered = "".join(
        [cipher[i % len(cipher)] if t.isalpha() else t for i, t in enumerate(text)]
    )
    return deciphered


text1 = input()
text2 = input()
text3 = input()

print(substitution_cipher(text1, text3))