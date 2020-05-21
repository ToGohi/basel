import math

for j in range(1,11):
	iterations = 10**j
	total = 0
	for i in range(1, iterations):
		total += (1/i**2)
	result = math.sqrt(6 * total)
	print(j,".\t", result, "\t", iterations)