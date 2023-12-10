[PYTHON]
def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)
[/PYTHON]
[TESTS]
# Test case 1:
assert spin_words("Hello") == "Hello"
# Test case 2:
assert spin_words("Hello World!") == "World! Hello"
# Test case 3:
assert spin_words("Reverse Spinning Words") == "Words Spinning Reverse"
[/TESTS]
