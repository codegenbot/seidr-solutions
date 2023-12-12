def substitute(cipher, message):
    # Create a dictionary to store the mapping of characters
    char_map = {}
    
    # Iterate over the cipher and message simultaneously
    for c1, c2 in zip(cipher, message):
        # If the character is not already in the map, add it
        if c1 not in char_map:
            char_map[c1] = c2
    
    # Iterate over the message and substitute the characters
    for i, c in enumerate(message):
        if c in char_map:
            message[i] = char_map[c]
    
    return ''.join(message)
