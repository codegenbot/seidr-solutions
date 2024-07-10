def mastermind(code, guess):
    code_counts = {c: code.count(c) for c in set(code)}
    guess_counts = {c: guess.count(c) for c in set(guess)}

    white = sum(min(count1, count2) for (c1, count1), (c2, count2) in zip(code_counts.items(), guess_counts.items()))
    black = sum(1 for c, count in code_counts.items() if count > 0 and guess_counts[c] == count)
    return str(white), str(black)