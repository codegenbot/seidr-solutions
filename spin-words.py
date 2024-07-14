Here's the solution:

def spin_words(text):
    return ' '.join(word if len(word) < 5 else word[::-1] for word in text.split())