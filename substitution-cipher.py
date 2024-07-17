def substitution_cipher(key, message):
    combined = "".join(sorted([key, message]))
    key_map = {k: v for k, v in zip(key, (i for i in combined if i not in key)[len(key):])}

    rev_key_map = {v: k for k, v in key_map.items()}
    
    return "".join([rev_key_map.get(char, char) for char in message])