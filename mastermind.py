def mastermind(code, guess):
    B_O = [c for c in code if c in ["B", "O"]]
    O_B = [c for c in code if c in ["O", "B"]]
    B_O_count = B_O.count("B")
    O_B_count = O_B.count("O")

    white = sum(1 for a, b in zip(guess, code) if a == b and a not in ["B", "O"])
    black = B_O_count + O_B_count
    return str(white), str(black)