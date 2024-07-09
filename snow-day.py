```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        new_snow = rate_of_fall - (melting_rate * snow)
        if new_snow > 0:
            snow += new_snow
        else:
            snow -= abs(new_snow)
    return round(snow,6)