```
def decipher_cipher(map_to, original, message):
    result = ""
    for char in message:
        if char in original:
            index = original.index(char)
            result += map_to[index]
        else:
            result += char
    return result


map_to = input()
original = input()
message = input()
print(decipher_cipher(original, map_to, message))