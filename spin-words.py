def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) >= 5:
            half = len(word) // 2
            result.append(word[half:] + word[:half][::-1])
        else:
            result.append(word)
    return " ".join(result)