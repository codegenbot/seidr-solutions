def substitution_cipher(input1, input2, input3):
    cipher = {c: d for c, d in zip(input1, input2)}
    output = "".join([cipher.get(c, c) for c in input3])
    return output