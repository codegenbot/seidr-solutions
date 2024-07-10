def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_count, "BOY")
    )

    black_pegs = sum(code[i] == guess[i] for i in range(4))

    return str(black_pegs) + "\n" + str(white_pegs)