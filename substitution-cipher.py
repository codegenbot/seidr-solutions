def substitution_cipher(text1, text2, text3):
    cipher = str.maketrans(text1, text2)
    return text3.translate(cipher)


text1 = input().strip()
text2 = input().strip()
text3 = input().strip()

print(substitution_cipher(text1, text2, text3))