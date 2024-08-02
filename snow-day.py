Here is the solution:

def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_of_snow_melting):
    total_snow = 0
    for _ in range(hours):
        total_snow += rate_of_snow_fall
        if initial_snow + total_snow > 100:
            remaining_snow = 100 - initial_snow
            total_snow -= remaining_snow * proportion_of_snow_melting
            initial_snow += remaining_snow
    return initial_snow + total_snow