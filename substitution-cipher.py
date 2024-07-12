cipher1 = input()
cipher2 = input()
text = input()

deciphered_text = ""
for char in text:
    if char in cipher1:
        index = cipher1.index(char)
        deciphered_text += cipher2[index]
    else:
        deciphered_text += char

print(deciphered_text)