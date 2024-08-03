def substitution_cipher(cipher, message):
    return "".join([cipher[i] if i < len(cipher) else "" for i in range(len(message))])


cipher = input().strip()
message = input().strip()
print(substitution_cipher(cipher, input().strip()))