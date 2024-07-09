def snow_day():
    inputs = input("Enter hours and snow data (space separated): ").split()
    
    try:
        hours = int(inputs[0])
        ground_snow = float(inputs[1])
        rate_snowfall = float(inputs[2])
        melt_rate = float(inputs[3])
        
        getcontext().prec = 30
        ground_snow = Decimal(str(ground_snow))
        for _ in range(hours):
            ground_snow += Decimal(str(rate_snowfall))
            ground_snow -= ground_snow * Decimal(str(melt_rate))
        return str(round(float(ground_snow), 6))
    except ValueError:
        return "Invalid input. Please enter valid numbers."

print(snow_day())