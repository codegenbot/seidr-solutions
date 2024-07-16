```
def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_snowfall
        if total_snow > 0:
            excess_snow = int(total_snow)
            remaining_snow = total_snow - excess_snow
            total_snow = excess_snow + (remaining_snow - melt_rate) if remaining_snow > melt_rate else 0
    return total_snow