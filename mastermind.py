def mastermind(code, guess):
    white = 0
    black = 0
    code_set = set(code)
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess[i] in code_set:
            white += 1
    return str(black) + "\n" + str(white)


# Test cases
print(mastermind("RRRR", "RRRR"))
print(mastermind("BOYG", "GYOB"))
print(mastermind("WYYW", "BBOG"))
print(mastermind("GGGB", "BGGG"))
print(mastermind("BBBB", "OOOO"))