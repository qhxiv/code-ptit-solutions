import math

t = int(input())
while t > 0:
	t -= 1
	n = input()
	sum = 0
	check = True
	for i in range(len(n)):
		if n[i] >= '0' and n[i] <= '9':
			sum += int(n[i])
			if i > 0 and abs(int(n[i]) - int(n[i - 1])) != 2:
				check = False
				break
	if check and sum % 10 == 0:
		print("YES")
	else: print("NO")