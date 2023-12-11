def snow_day(hours: int, initial_snow: float, snow_fall_rate: float, melting_rate: float) -> float:
    snow = initial_snow
    for i in range(hours):
        snow += snow_fall_rate * (1 - melting_rate)
        if snow < 0:
            snow = 0
    return snow