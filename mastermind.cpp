[PYTHON]
def get_clues(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
    for i in range(len(code)):
        if code[i] != guess[i] and guess[i] in code:
            white_pegs += 1
    return black_pegs, white_pegs
[/PYTHON]
[TESTS]
# Test case 1:
assert get_clues("RGBY", "GGRR") == (2, 0)
# Test case 2:
assert get_clues("RGBY", "RGGB") == (3, 0)
# Test case 3:
assert get_clues("RGBY", "YYRR") == (1, 1)
[/TESTS]
