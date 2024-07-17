def substitution_cipher(key, message):
    key_set = set(key)
    if len(set(message)) > len(key_set):
        missing_chars = set(message) - key_set
        for char in missing_chars:
            i = 0
            while chr(i+97) in key_set or chr(i+65) in key_set:
                i += 1
            key_map[char] = chr(i+97)
            rev_key_map[chr(i+97)] = char
    
    return "".join([rev_key_map.get(char, char) for char in message])