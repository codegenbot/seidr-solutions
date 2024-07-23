result.append(word[::-1] if len(word) >= 5 else word)
return " ".join(result)