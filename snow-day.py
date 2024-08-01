def snow_day(hours, initial_snow, rate_snowfall, rate_melting):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_snowfall
        snow -= rate_melting * snow
    return round(snow, 10)