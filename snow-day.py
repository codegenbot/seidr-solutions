```
def snow_day(hours, initial_snow, rate, melt_rate):
    """ 
    Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
    """
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate
        if total_snow > 0:
            total_snow -= melt_rate
        else:
            break
    return round(total_snow, 5)