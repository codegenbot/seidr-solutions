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
assert spin_words("hello world") == "world hello"
# Test case 3:
assert spin_words("hello world, how are you?") == "world, how are you? hello"
[/TESTS]
