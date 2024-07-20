```
black_pegs = 0
white_pegs = 0
code_counts = [0] * 6
for c in code:
    code_counts[ord(c) - ord("B")] += 1

for i in range(4):
    if code[i] == guess[i]:
        black_pegs += 1
    elif code_counts[ord(guess[i]) - ord("B")] > 0:
        white_pegs += 1
        code_counts[ord(guess[i]) - ord("B")] -= 1

for i in range(6):
    black_pegs += min(code.count(chr(ord("B") + i)), guess.count(chr(ord("B") + i)))

return str(black_pegs), str(white_pegs)