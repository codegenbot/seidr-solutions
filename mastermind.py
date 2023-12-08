```python
def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_dict = {}
    guess_dict = {}

    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_dict[code[i]] = 0
            guess_dict[guess[i]] = 0
        else:
            if code[i] in code_dict:
                code_dict[code[i]] += 1
            else:
                code_dict[code[i]] = 1

            if guess[i] in guess_dict:
                guess_dict[guess[i]] += 1
            else:
                guess_dict[guess[i]] = 1

    for color, count in code_dict.items():
        if count > 0 and color in guess_dict:
            white_pegs += min(count, guess_dict[color])

    return white_pegs, black_pegs
```