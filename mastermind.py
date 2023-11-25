import collections
code=input()
guess=input()
black_pegs=0
white_pegs=0
code_counts=collections.Counter(code)
guess_counts=collections.Counter(guess)
for i in range(len(code)):
    if code[i]==guess[i]:
        black_pegs+=1
        code_counts[code[i]]-=1
        guess_counts[guess[i]]-=1
for color in code_counts:
    white_pegs+=min(code_counts[color],guess_counts[color])
print(white_pegs)
print(black_pegs)