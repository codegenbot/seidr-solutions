def spin_words(s):
    words = s.split()
    result = []
    for i, word in enumerate(words):
        if len(word.strip()) >= 5:
            result.append(word.strip()[::-1])
        else:
            result.append(word)
    return ' '.join(result)