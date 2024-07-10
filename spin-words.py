def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) >= 5:
            return ' '.join(word[::-1] for word in words)
    return ' '.join(words)