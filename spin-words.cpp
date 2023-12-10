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
assert spin_words("") == ""
# Test case 2:
assert spin_words("hello") == "hello"
# Test case 3:
assert spin_words("hello world") == "world hello"
# Test case 4:
assert spin_words("what is up") == "up what is"
# Test case 5:
assert spin_words("spin me around like a record") == "record like a around me spin"
[/TESTS]
