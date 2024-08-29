```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    full_hours = int(hours)
    remaining_hours = hours - full_hours
    return round(initial_snow + full_hours * rate_of_fall + remaining_hours * rate_of_fall - full_hours * melt_rate - remaining_hours * melt_rate, 10)