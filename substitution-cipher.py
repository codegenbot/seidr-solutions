cipher = input()
decipher = input()
message = input()

for char in message:
    if char in cipher:
        index = cipher.index(char)
        print(decipher[index], end='')
    else:
        print(char, end='')