def substitution_cipher():
    cipher_map = str(input())
    message = str(input())
    result = ""

    for char in message:
        if char in cipher_map:
            result += char.replace(char, cipher_map[0])
        else:
            result += char

    return result


print(substitution_cipher())