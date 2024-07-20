```Python
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += char
    return result

cipher1 = "mibcrjldqgezwxpnkuyfs"
cipher2 = "xfzhcupmnsdryevlkwojq"
message = "cljbicefdwzlskwjjkgcypk"

print(substitution_cipher(cipher1, cipher2, message))