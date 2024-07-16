def mastermind():
    code = input("Enter the Mastermind code (4 characters): ")
    guess = input("Enter your guess (4 characters): ")

    blacks = sum(1 for c, g in zip(code, guess) if c == g)
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord('A')] += 1

    whites = sum(min(count, guess.count(c)) for c, count in zip(map(chr, range(ord('A'), ord('F')+1)), code_count))
    return str(min(4, whites-blacks)), str(blacks)