def spin_words(sentence):
    if not sentence:
        return ""
    words = sentence.split()
    for i in range(len(words)):
        words[i] = words[i][::-1] if len(words[i]) > 4 else words[i]
    return ' '.join(words)