def mastermind(code, guess):
    correct_colors = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    correct_places = sum([1 for i in range(4) if code[i] == guess[i]])
    return 4 - correct_places, correct_colors - correct_places