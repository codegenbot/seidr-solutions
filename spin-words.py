
def spin_words():
    string = input("Enter a string: ")
    words = string.split()
    reversed_words = [word[::-1] for word in words if len(word) >= 5]
    result = " ".join(reversed_words)
    print("The spin-words result is:", result)