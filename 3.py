import math

num = 600851475143
count = 1
j = 2

for i in range(1, math.ceil(math.sqrt(num))):
	if(num % i == 0): # Factor check
		count = 0
		for j in range(2, i+1): #Prime Number check
			if(i % j == 0):
				count += 1
		if(count == 1):
			lpf = j

print("Largest Prime factor of " + str(num) + " is " + str(lpf))
