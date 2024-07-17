def substitution_cipher(cipher_map, text):
    result = ""
    for char in text:
        if char.isalpha():
            result += (
                cipher_map[ord(char.lower()) - 97]
                if char.islower()
                else cipher_map[ord(char.upper()) - 65].upper()
            )
        else:
            result += char
    return result


cipher_map1 = input().strip()
cipher_map2 = input().strip()
text = input().strip()

print(substitution_cipher(cipher_map1, cipher_map2), end="")