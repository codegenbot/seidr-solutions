def spin_words(sentence):
    if isinstance(sentence, str):
        return ' '.join(word[::-1] if len(word.strip(string.whitespace)) >= 5 else word for word in sentence.split())
    else:
        return "Invalid input. Please provide a string."