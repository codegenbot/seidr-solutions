def substitution_cipher():
    cipher = [list(x) for x in zip(input(), input())]
    message = input()
    deciphered_message = "".join(
        [cipher[i][0] if i < len(cipher[0]) else "" for i in range(len(message))]
    )
    return deciphered_message