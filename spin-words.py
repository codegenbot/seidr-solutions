def spin_words(sentence):
    words = []
    for word in sentence.split():
        words.append((word.strip().lower().translate(str.maketrans("", "", ",.!?")))[::-1] if len(word.strip()) >= 5 else word)
    return ' '.join(words)