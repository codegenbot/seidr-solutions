import math

def snow_day(hours, initial_snow, snow_fall_rate, melt_proportion):
    # Calculate the amount of snow that falls in each hour
    new_snow = hours * snow_fall_rate
    # Calculate the amount of snow that melts in each hour
    melted_snow = initial_snow * melt_proportion
    # Calculate the total amount of snow on the ground after all hours have passed
    total_snow = new_snow - melted_snow
    return total_snow