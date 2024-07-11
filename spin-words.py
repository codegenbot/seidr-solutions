def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[len(word)-1::-1] if len(word) <= 5 else word[:-5][::-1] + word[-5:])
        else:
            result.append(word)
    return ' '.join(result)