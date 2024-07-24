def spin_words(sentence):
    import string
    words = sentence.split()
    result = []
    for word in words:
        if len(word.strip(string.punctuation)) >= 5: 
            result.append(word[::-1].strip(string.punctuation))
        else:
            result.append(word)
    return " ".join(result).strip()