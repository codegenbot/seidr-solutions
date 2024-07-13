def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        current_snow = total_snow + rate_of_snowfall - (melt_rate * (total_snow + rate_of_snowfall))
    return round(current_snow, 2)