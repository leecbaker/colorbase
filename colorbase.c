#include <stdio.h>

int main() {
	while(1) {
		int ch = getchar();
		switch(ch) {
			case EOF:
				printf("\e[30m%c",ch); // black
				return 0;
			case 'A':
			case 'a':
				printf("\e[32m%c", ch); // green
				break;
			case 'C':
			case 'c':
				printf("\e[34m%c", ch); // blue
				break;
			case 'G':
			case 'g':
				printf("\e[33m%c", ch); // orange
				break;
			case 'T':
			case 't':
				printf("\e[31m%c", ch); // red
				break;
			default:
				printf("\e[30m%c",ch); // black
				break;
		}
	}
}
