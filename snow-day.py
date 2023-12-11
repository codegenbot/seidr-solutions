def snow_day(hours, initial_snow, rate_of_snow_fall, proportion_of_snow_melting):
    # Initialize variables
    current_snow = initial_snow
    hours_passed = 0
    while hours_passed < hours:
        # Add snow
        current_snow += rate_of_snow_fall * (1 - proportion_of_snow_melting)
        # Melt snow
        current_snow *= (1 - proportion_of_snow_melting)
        hours_passed += 1
    return current_snow