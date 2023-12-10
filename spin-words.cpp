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
assert spin_words("Welcome to New York") == "Welcome to New York"
# Test case 4:
assert spin_words("abcde fghijklm nopqrst uvwxyz") == "abcde fghijklm nopqrst uvwxyz"
[/TESTS]
