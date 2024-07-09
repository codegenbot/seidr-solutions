def mastermind(code, guess):
    black_pegs = sum(1 for i in range(len(code)) if code[i] == guess[i])
    white_pegs = 0
    for c in set(guess):
        if c in code:
            white_pegs += (
                min((guess).count(c), (code).count(c)) - black_pegs and c != guess[i]
            )
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)