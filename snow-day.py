def snow_day(hours, snow_ground, rate_of_snow_fall, melting_rate):
    return round(snow_ground + (rate_of_snow_fall * hours) - (melting_rate * hours), 8)