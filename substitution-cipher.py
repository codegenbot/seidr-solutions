def substitution_cipher():
    cipher_map = [k for k1, k2 in zip(input().strip(), input().strip())]
    message = input().strip()
    return "".join([c if c in cipher_map else "" for c in message])

print(substitution_cipher())