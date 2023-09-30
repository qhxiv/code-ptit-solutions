t = int(input())
while t > 0:
	t -= 1
	cnt = 1
	s = input()
	for i in range(1, len(s)):
		if (s[i] != s[i - 1]):
			print(f"{cnt}{s[i - 1]}", end = '')
			cnt = 1
		else: cnt += 1
	print(f"{cnt}{s[len(s) - 1]}")