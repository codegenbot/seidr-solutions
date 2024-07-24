def substitution_cipher(cipher_map):
    result = ""
    for char in cipher_map[1]:
        if char in cipher_map[0]:
            index = cipher_map[0].index(char)
            result += cipher_map[2][index]
        else:
            result += char
    return result


cipher_map = [input().strip(), input().strip()]
message = input().strip()
print(substitution_cipher([cipher_map, message]))