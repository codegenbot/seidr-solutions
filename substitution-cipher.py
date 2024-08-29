def decipher(input_cipher, target):
    deciphered = ""
    for char in target:
        if len(input_cipher) > 0 and len(input_cipher[0]) > 0:
            index = ord(char) - ord("a")
            deciphered += input_cipher[1][index % len(input_cipher[1])]
        else:
            deciphered += char
    return deciphered


cipher_input, cipher_output, target_message = input().split()
print(decipher(cipher_input + cipher_output, target_message))