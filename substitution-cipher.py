```Python
cipher1 = input("Enter cipher1: ")
cipher2 = input("Enter cipher2: ")
message = input("Enter message: ")

def substitution_cipher(cipher1, cipher2, message):
    lower_mapping = {}
    upper_mapping = {}

    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c1.isalpha():
            lower_mapping[c1] = c2
            upper_mapping[c1.upper()] = c2.upper()

    mapping = {**{k: v for k, v in lower_mapping.items()}, **{k: v for k, v in upper_mapping.items()}}

    result = ""
    for char in message:
        if char.isalpha() and char in mapping:
            result += mapping[char].upper() if char.isupper() else mapping[char]
        else:
            result += char

    return result

print(substitution_cipher(cipher1, cipher2, message))