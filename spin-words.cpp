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
assert spin_words("hello") == "hello"
# Test case 2:
assert spin_words("hello world") == "hello world"
# Test case 3:
assert spin_words("the quick brown fox jumps over the lazy dog") == "the quick brown fox jumps over the lazy dog"
# Test case 4:
assert spin_words("maze") == "maze"
# Test case 5:
assert spin_words("maze you") == "maze you"
[/TESTS]
