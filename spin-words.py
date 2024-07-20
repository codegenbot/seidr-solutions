import string

def spin_words(sentence):
    translator = str.maketrans('', '', string.punctuation)
    sentence_no_punct = sentence.translate(translator)
    return ' '.join(word[::-1] if len(word.strip(string.whitespace)) >= 5 else word for word in sentence_no_punct.split())