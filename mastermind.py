def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0] * 6

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_count[ord(code[i]) - ord('A')] += 1
        elif code_count[ord(code[i]) - ord('A')] < 1:
            code_count[ord(code[i]) - ord('A')] += 1

    for i in range(4):
        if guess[i] in code and code[i] != guess[i]:
            white += 1

    return str(black) + "\n" + str(white)

print(mastermind("RRRR", "RRRR"))
print(mastermind("BOYG", "GYOB"))
print(mastermind("WYYW", "BBOG"))
print(mastermind("GGGB", "BGGG"))
print(mastermind("BBBB", "OOOO"))