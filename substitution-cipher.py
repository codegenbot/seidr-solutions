cipher1 = input()
cipher2 = input()
message = input()

deciphered_message = "".join(cipher2[cipher1.index(c)] for c in message)
print(deciphered_message)