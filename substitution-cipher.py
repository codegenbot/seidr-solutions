def substitution_cipher(cipher_map, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(cipher_map[0].upper().index(char)) - 65) % 26 + 65)
            else:
                result += chr((ord(cipher_map[0].lower().index(char)) - 97) % 26 + 97)
        else:
            result += char
    return result


cipher_map = input().split()
message = input()

print(substitution_cipher(cipher_map, message))