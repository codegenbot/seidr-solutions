def substitution_cipher():
    cipher_mapping = [chr(ord(i1) - ord(i0)) for i0, i1 in zip(input(), input())]
    message = input()
    return "".join(
        [
            cipher_mapping[ord(c) - 97] if c.islower() else cipher_mapping[ord(c) - 65]
            for c in message
        ]
    )