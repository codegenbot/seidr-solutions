def substitution_cipher(cipher, message):
    result = ""
    for i in range(len(message)):
        result += cipher[i % len(cipher)]
    return result

input: "jhj"
output: "hhh"

input: "aaz"
output: "zzz"

input: "eeeeeeeeee"
output: "llllllllll"