def snow_day(hours: int, ground_snow: float, snow_fall: float, melt_rate: float) -> float:
    for i in range(1, hours+1):
        ground_snow += snow_fall
        ground_snow -= ground_snow * melt_rate
    return ground_snow