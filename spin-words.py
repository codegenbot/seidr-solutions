def spin_words(words):
    return " ".join([word if len(word) < 5 else " " + word[::-1] + " " for word in words]).strip()