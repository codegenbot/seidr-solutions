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
assert spin_words("what is the capital of france") == "what is the capital of france"
# Test case 4:
assert spin_words("left right up down") == "left right up down"
# Test case 5:
assert spin_words("go forward turn left") == "go forward turn left"
[/TESTS]
