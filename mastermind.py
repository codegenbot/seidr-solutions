black = 0
for c, g in zip(code, guess):
    if c == g:
        black += 1
white = sum(min(count, 1) for c, count in code_counts.items() if c in guess)
print(f"Black: {black}, White: {4 - black}")