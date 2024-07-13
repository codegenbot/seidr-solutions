def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_set = set(code)
            if guess[i] in code_set:
                code_count[ord(guess[i]) - ord("O")] += 1
    white = sum(
        min(count, code.count(c)) for c, count in zip(map(str, range(6)), code_count)
    )
    black -= white
    return str(black) + "\n" + str(white)