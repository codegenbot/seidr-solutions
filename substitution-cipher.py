```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {c: k for k, c in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in mapping: 
                result += mapping[char.lower()].upper() if char.isupper() else mapping[char.lower()]
            else: 
                result += char
        else: 
            result += char
    return result