def decipher_cipher(input1, input2, input3):
    cipher = {char1: char2 for char1, char2 in zip(input1, input2)}
    output = "".join([cipher.get(char, char) for char in input3])
    return output