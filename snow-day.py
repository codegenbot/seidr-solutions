def snow_day(hours, initial_snow_feet, rate_of_snowfall_feet, proportion_melting):
    current_snow_inches = initial_snow_feet * 12
    for _ in range(hours):
        melted_inches = int(current_snow_inches / 12) * 12 * proportion_melting
        snow_inches = current_snow_inches - melted_inches + rate_of_snowfall_feet * 12
        current_snow_inches = min(100, max(snow_inches, 0))
    return round(current_snow_inches / 12, 2)