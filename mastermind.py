def mastermind(code, guess):
    char_freq = {c: guess.count(c) for c in set(guess)}
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    white_pegs = min(char_freq[c] - (code.count(c) if c != code[i] else 0) for c in set(guess)) - black_pegs
    return str(black_pegs) + "\n" + str(max(0, 4 - black_pegs - white_pegs))