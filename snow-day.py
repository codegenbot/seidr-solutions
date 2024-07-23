```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    total_snow = float(initial_snow)
    for _ in range(hours):
        new_snow = rate_of_fall
        melting_amount = total_snow * melting_rate
        total_snow += new_snow - melting_amount
    return str(round(total_snow, 12))