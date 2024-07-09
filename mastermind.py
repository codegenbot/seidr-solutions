```
code_chars = [0] * 6
guess_chars = [0] * 6

for c in code:
    code_chars[ord(c) - ord('R')] += 1

for c in guess:
    guess_chars[ord(c) - ord('R')] += 1

black, white = 0, 0
for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code_chars[ord(code[i]) - ord('R')] > 0:
        white += 1

print(f"Black: {black}, White: {4 - black}")