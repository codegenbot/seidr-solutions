def spin_words(sentence):
    words = sentence.split()
    result = ' '.join(word[::-1] if len(word) >= 5 else word for word in words)
    return ''.join(char if char == ' ' or index > len(word) - 1 else word[len(word)-index-1] for word in words for index, char in enumerate(' '.join(words)) if char != ' ')