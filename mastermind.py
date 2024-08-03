def mastermind(code, guess):
    code_counts = [0] * 6
    code_list = list(code)
    for char in code_list:
        if char != " ":
            code_counts[ord(char) - ord("B")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_counts, "BOYYG")
    )
    black_pegs = (
        sum(min(count, guess.count(char)) for count, char in zip(code_counts, "BOYYG"))
        - white_pegs
    )
    return str(black_pegs), str(white_pegs)