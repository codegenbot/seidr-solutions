def substitution_cipher():
    cipher = [c for c in input().lower()]
    text = [c for c in input().lower()]
    message = [c for c in input().lower()]

    deciphered_message = "".join([char for char in message if char in cipher])
    deciphered_text = ""
    for char in deciphered_message:
        index = cipher.index(char)
        deciphered_text += text[index]

    return deciphered_text


print(substitution_cipher())