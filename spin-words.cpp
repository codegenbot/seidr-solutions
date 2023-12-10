[PYTHON]
def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            word = word[::-1]
        result.append(word)
    return " ".join(result)
[/PYTHON]
[TESTS]
# Test case 1:
assert spin_words("Hello") == "Hello"
# Test case 2:
assert spin_words("Hello World!") == "Hello World!"
# Test case 3:
assert spin_words("Reverse Spinning Words") == "Reverse Spinning Words"
# Test case 4:
assert spin_words("This is a test sentence") == "This is a test sentence"
# Test case 5:
assert spin_words("The quick brown fox jumps over the lazy dog") == "The quick brown fox jumps over the lazy dog"
[/TESTS]
