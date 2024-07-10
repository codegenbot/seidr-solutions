def substitution_cipher(input1, input2, input3):
    cipher = {c: d for c, d in zip(input1, input2)}
    return "".join(cipher.get(char) if char in cipher else char for char in input3)