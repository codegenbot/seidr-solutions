def mastermind(code, guess):
    code_counts = [0] * 6
    guess_counts = [0] * 6

    for c in code:
        code_counts[ord(c) - ord("B")] += 1
    for g in guess:
        guess_counts[ord(g) - ord("B")] += 1

    white_pegs = sum(min(count, guesses) for count, guesses in zip(code_counts, guess_counts)) - sum(1 for i in range(len(code) // 4) if code[i*4:(i+1)*4] == guess[i*4:(i+1)*4])
    black_pegs = sum(1 for i in range(len(code) // 4) if code[i*4:(i+1)*4] == guess[i*4:(i+1)*4])

    return str(black_pegs) + "\n" + str(4 - black_pegs)