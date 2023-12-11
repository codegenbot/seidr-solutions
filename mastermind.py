Solve the following code contest problem: mastermind. Problem description: Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue..
Currently, the code is 
```
def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1
    return (white_pegs, black_pegs)
``` 
Modify the code as  Change the line `white_pegs += 1` to `white_pegs = max(white_pegs, 1)`.
You must only return correct code. Remove any triple quotes, language name or explanations.

Here's my solution:
```
def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs = max(white_pegs, 1)
    return (white_pegs, black_pegs)
```