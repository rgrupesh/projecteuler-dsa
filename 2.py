a = 0
b = 1
sum = 0
c = 0

while(c < 4000000):
	c = a + b
	if(c % 2 == 0):
		sum += c
	a = b
	b = c

print('Sum is ', sum)