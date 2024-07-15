```python
return " ".join(' '.join([word[::-1] if len(word) >= 5 else word for word in w.split()]) if w.isspace() else w for w in sentence.split())