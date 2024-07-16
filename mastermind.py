```python
def mastermind(code, guess):
    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    whites = len([c for c in code if c in guess]) - blacks
    return str(min(4, whites)), str(blacks)