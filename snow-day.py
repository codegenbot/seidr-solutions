def get_snow(hours, initial_amount, rate, melt):
    snow = initial_amount
    for i in range(hours):
        snow += (rate * math.sin(math.pi * (i / hours)))
        snow *= (1 - melt)
    return snow