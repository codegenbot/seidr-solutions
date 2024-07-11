```python
def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[len(word)-1::-1] + word[:len(word)-5][::-1])
        else:
            result.append(word)
    return ' '.join(result)