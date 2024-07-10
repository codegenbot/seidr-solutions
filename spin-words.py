def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) > 4:
            result.append(word[len(word)-1::-1])
        else:
            result.append(word)
    return ' '.join(result)