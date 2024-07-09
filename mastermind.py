correct_counts = {k: min(v, 1) for k, v in zip(guess, code)}
black = sum(correct_counts.values())
white = sum((v-1) for k, v in code_counts.items() if k in correct_counts)
print(f"Black: {black}, White: {white}")