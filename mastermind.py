
<<REPL>>
import collections
def mastermind(code, guess):
    """
    >>> mastermind("RRRR", "RRRR")
    0 4
    >>> mastermind("BOYG", "GYOB")
    4 0
    >>> mastermind("WYYW", "BBOG")
    0 0
    >>> mastermind("GGGB", "BGGG")
    2 2
    >>> mastermind("BBBB", "OOOO")
    0 0
    """
    code = list(code)
    guess = list(guess)
    white_pegs = 0
    black_pegs = 0
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
    for i in range(len(code)):
        if code[i] != guess[i] and guess[i] in code:
            white_pegs += 1
    return (white_pegs, black_pegs)
<<REPL>>
