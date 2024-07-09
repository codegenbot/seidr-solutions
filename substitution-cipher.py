for char in message:
    if char.isalpha():
        key = char.lower()
        result += cipher_dict.get(key, key).upper() if char.isupper() else cipher_dict.get(key, key)
    else:
        result += char