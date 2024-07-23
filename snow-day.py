```python
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = 0
    for _ in range(hours):
        new_snow = initial_snow + rate_of_fall
        initial_snow = max(0, initial_snow + rate_of_fall - melting_rate * (initial_snow + rate_of_fall))
    return round(initial_snow, 6)