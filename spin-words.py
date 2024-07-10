Here's the solution:

def spin_words(s):
    words = s.split()
    return ' '.join(word if len(word) <= 4 else word[::-1] for word in words)