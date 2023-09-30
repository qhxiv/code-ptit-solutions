#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char s[100];
	gets(s);
	int cc, cs, ktk;
	cc = cs = ktk = 0;
	for (int i=0;i<strlen(s);i++) {
		if (isalpha(s[i]))
			cc++;
		else if (isdigit(s[i]))
			cs++;
		else ktk++;
	}
	printf("%d %d %d", cc, cs, ktk);
	return 0;
}
