def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code:
        code_counts[ord(char) - ord("A")] += 1

    black_pegs = sum(c1 == c2 for c1, c2 in zip(guess, code))
    white_pegs = sum(min(code_counts[i], guess.count(chr(i + ord('A')))) for i in range(6))

    return str(black_pegs) + " " + str(white_pegs)