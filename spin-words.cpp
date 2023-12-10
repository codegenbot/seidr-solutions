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
assert spin_words("Hello World!") == "Hello World!"
# Test case 2:
assert spin_words("abcde xyz") == "abcde xyz"
# Test case 3:
assert spin_words("abcdef xyz") == "xyz abcdef"
# Test case 4:
assert spin_words("abcdefg xyz") == "xyz abcdefg"
# Test case 5:
assert spin_words("abcdefgh xyz") == "xyz abcdefgh"
[/TESTS]
