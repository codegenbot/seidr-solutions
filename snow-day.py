def snow_day(hours, initial_snow, snow_fall, melt_rate):
    """
    Return the amount of snow on the ground after hours have passed.
    """
    total_snow = initial_snow + (hours * snow_fall)
    if melt_rate == 0:
        return total_snow
    else:
        melted_snow = (total_snow * melt_rate) / hours
        return total_snow - melted_snow