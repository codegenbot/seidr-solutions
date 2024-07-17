def substitution_cipher(key1, message):
    upper_key_map = {k: v for k, v in zip(key1[:26], message[:26])}
    lower_key_map = {k: v for k, v in zip(key1[26:], message[26:])}
    key_map = {**upper_key_map, **dict((chr(i), chr(i)) for i in range(97, 123))}
    return "".join([key_map.get(char.lower(), char) for char in message]).upper()