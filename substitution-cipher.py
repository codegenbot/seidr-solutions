def substitution_cipher(cipher1, cipher2, text):
    deciphered = "".join([cipher2[i] if i < len(text) else "" for i in range(len(text))])
    return deciphered


print(substitution_cipher(input(), input(), input()))