Here's the Python code to solve the problem:

```python
def spin_words(input_str):
    words = input_str.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return ' '.join(result)

print(spin_words("a")) # a
print(spin_words("this is a test")) # this is a test
print(spin_words("this is another test")) # this is rehtona test
print(spin_words("hi")) # hi