whites = sum(code[i] in guess[i:i+1] for i in range(4))
blacks = sum([a in b and a != b[i] for i,a in enumerate(guess) for b in [code]])

return str(whites), str(blacks)