def substitution_cipher(input1, input2, input3):
    cipher = {c1: c2 for c1, c2 in zip(input1, input2)}
    output = "".join(cipher[c] if c in cipher else c for c in input3)
    return output