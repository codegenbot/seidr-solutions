```
def spin_words(text):
    words = text.split()
    result = ['' for _ in words]
    for i in range(len(words)):
        if len(words[i]) >= 5:
            result[i] = words[i][::-1]
        else:
            result[i] = words[i]
    return ' '.join(result)