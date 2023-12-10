[PYTHON]
def get_clues(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(len(guess)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code and not is_matched(guess, i):
            white_pegs += 1
    return white_pegs, black_pegs

def is_matched(guess, pos):
    for i in range(pos):
        if guess[i] == guess[pos]:
            return True
    return False
[/PYTHON]
[TESTS]
# Test case 1:
assert get_clues("RGBY", "GYYR") == (1, 2)
# Test case 2:
assert get_clues("RGBY", "RYGB") == (0, 4)
# Test case 3:
assert get_clues("RGBY", "RBGG") == (1, 3)
[/TESTS]
