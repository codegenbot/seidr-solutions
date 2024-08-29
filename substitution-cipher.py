def substitution_cipher(cipher, text):
    deciphered = "".join([cipher[i] if i < len(cipher) else "" for i in range(len(text))])
    return deciphered


cipher1 = input()
cipher2 = input()
text = input()

print(substitution_cipher(cipher2, text))