```
def substitution_cipher(cipher_map, message):
    result = ""
    for char in message:
        if len(char) == 1 and ord("a") <= ord(char) <= ord("z"):
            idx = (ord(char) - ord("a")) % len(cipher_map)
            result += cipher_map[idx]
        else:
            result += char
    return result

cipher_map = input().strip()
message = input().strip()
print(substitution_cipher(list(cipher_map), message))