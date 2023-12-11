def snow_day(hours, initial_snow, snow_fall, melt_rate):
    # Initialize variables
    current_snow = initial_snow
    hours_passed = 0
    while hours_passed < hours:
        # Add new snow
        current_snow += snow_fall * (1 - math.exp(-melt_rate * hours_passed))
        # Melt existing snow
        current_snow -= melt_rate * current_snow
        hours_passed += 1
    return current_snow