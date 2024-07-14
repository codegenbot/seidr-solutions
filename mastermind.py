def mastermind(code, guess):
    if len(code) != 4 or len(guess) != 4:
        return "Invalid input length. Please enter a 4-character string."

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    black_pegs = sum(1 for a, b in zip(code, guess) if a == b)

    white_pegs = (
        sum(min(count, guess.count(c)) for count, c in zip(code_count, "BOYWG"))
        - black_pegs
    )

    return str(black_pegs) + "\n" + str(4 - (black_pegs + white_pegs))