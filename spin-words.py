def spin_words(sentence):
    sentence_no_punct = (
        "".join(e for e in sentence if e.isalnum() or e.isspace())
        .replace(" ", " ")
        .split()
    )
    return " ".join(
        word[::-1] if len(word) >= 5 else word for word in sentence_no_punct
    )