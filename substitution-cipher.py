def substitution_cipher(cipher_a, cipher_b, message):
    deciphered = ""
    for char in message:
        for i in range(len(cipher_a)):
            if char == cipher_a[i]:
                deciphered += cipher_b[i]
                break
    return deciphered