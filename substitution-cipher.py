```
def decipher_cipher(input1, input2, input3):
    cipher = {}
    for char1, char2 in zip(input1, input2):
        if char1 != char2:
            cipher[char1] = char2
    output = ""
    for char in input3:
        for key, value in cipher.items():
            if char == value:
                output += key
            else:
                output += char
    return output