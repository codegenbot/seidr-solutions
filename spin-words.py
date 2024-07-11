def spin_words(s):
    return ' '.join(word[::-1] if len(word) >= 5 else word for word in s.split()[::-1])

print(spin_words("hello world"))