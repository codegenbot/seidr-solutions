def substitution_cipher(cipher1, cipher2, message):
    mapping = {chr(ord(c) + ord('a') - ord('a')): c2 for c, c2 in zip(cipher1, cipher2)}
    
    result = ""
    for char in message:
        if char.isalnum():
            result += mapping.get(char.lower(), char)
        else:
            result += char