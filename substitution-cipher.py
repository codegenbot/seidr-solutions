def substitution_cipher(cipher1, cipher2, text):
    deciphered = "".join([cipher2[cipher1.index(c)] for c in text if c in cipher1])
    return deciphered


cipher1 = input()
cipher2 = input()
text = input()

print(substitution_cipher(cipher1, cipher2, text))