def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[-(len(max(words))-len(word))+1:][::-1] + word[:-((len(max(words))-len(word))+1)])
        else:
            result.append(word)
    return ' '.join(result)