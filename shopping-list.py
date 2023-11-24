input_string = "4\n29.9 40.04 44.67 10.47\n4\n63.16 29.07 50.93 90.91"
input_lines = input_string.strip().split('\n')
prices = list(map(float, input_lines[1].split()))
discounts = list(map(float, input_lines[3].split()))