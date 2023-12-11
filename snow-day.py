def snow_day(hours, initial_snow, rate, melt):
    # Initialize variables
    current_snow = initial_snow
    hours_passed = 0

    while hours_passed < hours:
        # Add new snow
        current_snow += rate * (1 - math.exp(-melt * hours_passed))

        # Melt existing snow
        current_snow -= melt * current_snow

        hours_passed += 1

    return current_snow