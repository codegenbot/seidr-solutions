Here is the completed code:

def mastermind(code, guess):
    correct_places = sum([1 for i in range(4) if code[i] == guess[i]])
    correct_colors = sum([min(1, code.count(c)) for c in set(guess)])
    return str(correct_places), str(4 - correct_places + correct_colors)