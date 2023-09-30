#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char s1[100], s2[100];
	gets(s1);
	scanf("%s", s2);
	int i=0;
	while (i<=strlen(s1)-1) {
		if (s1[i]==s2[0]&&(!isalpha(s1[i+strlen(s2)]))) {
			int ok = 1;
			for (int j=1;j<strlen(s2);j++) {
				if (s1[i+j]!=s2[j]) {
					ok = 0;
					break;
				}
			}
			if (ok)
				i += strlen(s2);
		}
		printf("%c", s1[i]);
		i++;
	}
	return 0;
}
