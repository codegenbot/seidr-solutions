def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "00"

    for c in code + guess:
        if c not in " ABCDEF":
            return "00"

    black = sum(1 for i, j in zip(map(str.isdigit), map(str.isdigit, code)) if str(i) == str(j))
    white = len([i for i in range(4) if code[i] == guess[i]]) - black

    return str(white) + "0" + str(black)