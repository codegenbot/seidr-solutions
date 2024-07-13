def mastermind(code, guess):
    white = 0
    black = 0
    code_set = set(code)
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_set.remove(code[i])
    for c in code_set:
        for i in range(4):
            if guess[i] == c and code[i] != c:
                white += 1
                break
    return str(black) + "\n" + str(white)