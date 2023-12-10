[PYTHON]
def get_clue(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif guess[i] in code:
            white_pegs += 1
    return white_pegs, black_pegs
[/PYTHON]
[TESTS]
# Test case 1:
code = "RRRR"
guess = "RRRR"
assert get_clue(code, guess) == (0, 4)
# Test case 2:
code = "BOYG"
guess = "GYOB"
assert get_clue(code, guess) == (4, 0)
# Test case 3:
code = "WYYW"
guess = "BBOG"
assert get_clue(code, guess) == (0, 0)
# Test case 4:
code = "GGGB"
guess = "BGGG"
assert get_clue(code, guess) == (2, 2)
# Test case 5:
code = "BBBB"
guess = "OOOO"
assert get_clue(code, guess) == (0, 0)
[/TESTS]
