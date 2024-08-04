def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1
    black_pegs = sum(1 for a, b in zip(guess, code) if a == b)
    white_pegs = sum(
        min(code_count[i], guess.count(chr(i + ord("A")))) for i in range(6)
    )
    return str(white_pegs), str(black_pegs)