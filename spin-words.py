def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        result.append(' ' + word[::-1].lower() if len(word) >= 5 else word)
    return " ".join(result).strip()