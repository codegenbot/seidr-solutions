Here is the solution:

def spin_words(s):
    return ' '.join([word[::-1] if len(word) >= 5 else word for word in s.split()])

print(spin_words("a")) # Should print: a
print(spin_words("this is a test")) # Should print: this is a test
print(spin_words("this is another test")) # Should print: this is rehtona test
print(spin_words("hi")) # Should print: hi