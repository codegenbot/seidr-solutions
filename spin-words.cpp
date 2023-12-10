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
assert spin_words("Hello World") == "World Hello"
# Test case 3:
assert spin_words("The quick brown fox jumps over the lazy dog") == "The quick brown fox jumps over the lazy dog"
[/TESTS]
