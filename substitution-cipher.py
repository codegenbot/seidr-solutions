def substitution_cipher(key, message):
    key_sorted = "".join(sorted(key))
    combined = "".join(sorted([c1 for c1 in message]))
    
    key_map = {k: v for k, v in zip(key_sorted, combined)}
    rev_key_map = {v: k for k, v in key_map.items()}
    
    return "".join([rev_key_map.get(char, char) for char in message])