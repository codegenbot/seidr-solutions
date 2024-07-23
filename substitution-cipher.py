def substitution_cipher():
    cipher_map = str(input()).replace(" ", "")
    deciphered_map = str(input()).replace(" ", "")

    result = ""
    for char in str(input()):
        if char == " ":
            result += " "
        elif char in cipher_map:
            index = cipher_map.index(char)
            result += decipher_map[index]
        else:
            result += char

    return result