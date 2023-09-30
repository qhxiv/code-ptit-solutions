import math

t = int(input())
while t > 0:
	t -= 1
	n = int(input())
	print("1 ", end = '')
	for i in range(2, math.floor(math.sqrt(n))):
		if (n % i == 0):
			cnt = 0
			while (n % i == 0):
				cnt += 1
				n /= i
				n = int(n)
			print(f"* {i}^{cnt} ", end = '')
	if n != 1:
		print(f"* {n}^1", end = '')
	print()