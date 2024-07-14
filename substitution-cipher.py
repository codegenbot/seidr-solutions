def substitution_cipher(cipher1, cipher2, message):
    char_map = {char1: char2 for char1, char2 in zip(cipher1, cipher2)}
    result = ""
    min_len = min(len(cipher1), len(cipher2), len(message))
    for i in range(min_len):
        if message[i] in char_map:
            result += char_map[message[i]]
        else:
            result += message[i]
    return result