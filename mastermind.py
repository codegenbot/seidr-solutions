code_counts = [0] * 6
color_map = {"R": 0, "O": 1, "Y": 2, "G": 3, "B": 4, "I": 5}
for c in code:
    if c in color_map:
        code_counts[color_map[c]] += 1

black, white = 0, 0
for i in range(4):
    if code[i] == guess[i]:
        black += 1
    elif code_counts[color_map[code[i]]] > 0:
        white += 1

print(f"Black: {black}, White: {4 - black}")