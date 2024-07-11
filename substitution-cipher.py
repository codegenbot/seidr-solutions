def decipher(cipher1, cipher2, message):
    forward_mapping = {c.lower(): c for c in cipher1}
    reverse_mapping = {v.lower(): k for k, v in forward_mapping.items()}
    
    result = ""
    for char in message:
        if char.isalpha() and char.lower() in forward_mapping:
            result += forward_mapping[char.lower()]
        elif char.isalpha() and char.lower() in reverse_mapping:
            result += chr(ord(char) - (ord('a') if char.islower() else ord('A')))
    return result