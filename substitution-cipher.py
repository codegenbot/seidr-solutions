```
def decipher_cipher(input1, input2, input3):
    cipher = {k: v for k, v in zip(input1, input2)}
    output = ''
    for char in input3:
        if char in cipher:
            output += cipher[char]
        else:
            output += char
    return output