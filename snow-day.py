def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = 0
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_snowfall
        current_snow -= melt_rate * (current_snow + rate_of_snowfall)
    return round(current_snow, 10)