Here is the solution:

def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord('B')] += 1
    white = sum(min(count, guess.count(char)) for count, char in zip(code_count, 'BOYYG'))
    black = sum((code == guess).sum() - (count > guess.count(char)))
    return str(black), str(white)