```
def decipher_message(key1, key2, message):
    for char in message:
        if char.isalpha():
            key_index = min(range(len(key1)), key=lambda i: abs(ord(char) - ord(key1[i])))
            result += (key2[key_index].upper() if char.isupper() else key2[key_index])
        else:
            result += char
    return result