def spin_words(sentence):
    words = re.split('\W+', sentence)
    spun = [word[::-1] if len(word) >= 5 else word for word in words]
    return " ".join(spun)