```
def mastermind(code, guess):
    correct_place = sum(c1 == c2 for c1, c2 in zip(code, guess))
    correct_color = sum(c in code for c in guess)
    return str(correct_place), str(4 - (correct_place + (6 - len(set(guess)))))

# Test cases
print(mastermind('RRRR', 'RRRR'))
print(mastermind('BOYG', 'GYOB'))
print(mastermind('WYYW', 'BBOG'))
print(mastermind('GGGB', 'BGGG'))
print(mastermind('BBBB', 'OOOO'))