def mastermind(code, guess):
    white = sum(
        [
            1
            for a, b in zip(guess, code)
            if a == b
            and a != "R"
            and a != "O"
            and a != "B"
            and a != "W"
            and a != "Y"
            and a != "G"
        ]
    )
    black = sum([1 for i in range(len(guess)) if guess[i] == code[i]])
    return str(white) + "\n" + str(black)