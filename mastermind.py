for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code.count(guess[i]) > 0:
        white += 1
    elif guess[i] in code:
        white += 1