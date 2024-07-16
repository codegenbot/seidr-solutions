def mastermind():
    try:
        code = input("Enter the Mastermind code (4 characters): ")
        guess = input("Enter your guess (4 characters): ")

        if len(code) != 4 or len(guess) != 4:
            raise Exception("Incorrect input length")

        blacks = sum(1 for c, g in zip(code, guess) if c == g)
        black_count = 0
        white_count = [0] * 6
        for c, g in zip(code, guess):
            if c == g:
                black_count += 1
            else:
                white_count[ord(c) - ord("A")] += 1
        whites = sum(white_count)
        return str(whites - blacks), str(blacks)
    except Exception as e:
        print(f"Error: {str(e)}")
        return None

print(*mastermind())