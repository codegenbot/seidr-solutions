Here is the solution:

def substitution_cipher(cipher, message):
    return "".join([cipher[i] for i in range(len(message)) if cipher[i] != ""])

input_ciphers = input().split()
cipher1 = input_ciphers[0]
cipher2 = input_ciphers[1]
message = input()

deciphered_message = substitution_cipher(cipher1, message)
print(deciphered_message)