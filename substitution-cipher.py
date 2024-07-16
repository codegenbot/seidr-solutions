```
def substitution_cipher(cipher1, cipher2, message):
    result = ''
    mapping_dict = {char: cipher2[i] for i, char in enumerate(cipher1)}
    for char in message:
        if char in mapping_dict:
            result += mapping_dict[char]
        else:
            result += '?'
    return result