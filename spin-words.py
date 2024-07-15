def spin_words(sentence):
    words = sentence.split()
    result = []
    for i, word in enumerate(words):
        result.append(" " if (i > 0 and len(word) < 5) or i == 0 else "") + (" " + word[::-1] if len(word) >= 5 else word)
    return "".join(result).strip()