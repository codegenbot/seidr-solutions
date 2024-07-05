def snow_day(hours, ground_snow, fall_rate, melt_rate):
    # Calculate the amount of new snow that falls in a given hour
    new_snow = hours * fall_rate
    # Calculate the amount of snow that melts in a given hour
    melted_snow = round(ground_snow * melt_rate, 2)
    # Calculate the total amount of snow on the ground after the given hours
    total_snow = new_snow - melted_snow + ground_snow
    return round(total_snow, 2)