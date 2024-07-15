def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        result.append(' ' + word if len(word) < 5 else ' ' + word[::-1])
    return ''.join(result).strip()