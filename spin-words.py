    def spin_words(string):
        words = string.split()
        result = []
        for word in words:
            if len(word) >= 5:
                result.append(reversed(word))
            else:
                result.append(word)
        return " ".join(result)