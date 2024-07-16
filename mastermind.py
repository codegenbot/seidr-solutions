def mastermind(code, guess):
    white = sum(
        [
            1
            for i in range(4)
            if list(guess)[i] in list(code) and list(guess)[i] != list(code)[i]
        ]
    )
    black = sum([1 for i in range(4) if list(guess)[i] == list(code)[i]])
    return str(black), str(white)