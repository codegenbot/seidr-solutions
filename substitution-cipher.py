```
result += (
    cipher_dict.get(char.lower(), char).upper() if char.isalpha() and not char.islower() else
    cipher_dict.get(char.lower(), char) if char.isalpha() else
    char
)