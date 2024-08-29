```python
def snow_day(hours, initial_snow, rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate  # add new snow
        snow -= melt_rate  # subtract melted snow
    return round(snow, 5)