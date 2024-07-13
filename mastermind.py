input_str = input()
code = input_str[:4]
guess = input_str[5:]

import collections

black_pegs = sum(c == g for c, g in zip(code, guess))

code_freq = collections.Counter(code)
guess_freq = collections.Counter(guess)

white_pegs = (
    sum(
        min(code_freq[c], guess_freq[c])
        for c in code
        if code_freq[c] > 0 and guess_freq[c] > 0
    )
    - black_pegs
)

print(white_pegs, black_pegs)