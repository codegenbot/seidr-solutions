def substitution_cipher(cipher1, cipher2, text):
    deciphered = "".join([cipher2[i] if i < len(text) and i < len(cipher1) and i < len(cipher2) else "" for i in range(len(text))])
    return deciphered


cipher1 = input()
cipher2 = input()
text = input()

print(substitution_cipher(cipher1, cipher2, text))