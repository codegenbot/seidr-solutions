code = input("Enter code: ").upper()
guess = input("Enter guess: ").upper()

import collections

black_pegs = sum(c == g for c, g in zip(code[:4], guess[:4]))

code_freq = collections.Counter(code[:4])
guess_freq = collections.Counter(guess[:4])

white_pegs = (
    sum(
        min(code_freq[c], guess_freq[c])
        for c in code[:4]
        if code_freq[c] > 0 and guess_freq[c] > 0
    )
    - black_pegs
)

print(white_pegs, black_pegs)