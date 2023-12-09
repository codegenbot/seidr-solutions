```python
import collections

def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    white_pegs = sum((code_counts & guess_counts).values()) - black_pegs
    return white_pegs, black_pegs
```