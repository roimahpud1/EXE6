#include <stdio.h>

void main() {

	//Q1
	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = 'd';
	int res = pack4Chars2Int(c1, c2, c3, c4);
	unsigned char mask = 0;
	mask |= res;
	printf("%c\n", mask);
	res >>= 8;
	mask = 0;
	mask |= res;
	printf("%c\n", mask);
	res >>= 8;
	mask = 0;
	mask |= res;
	printf("%c\n", mask);
	res >>= 8;
	mask = 0;
	mask |= res;
	printf("%c\n", mask);
	//Q2
	printf("%d\n", checkEvenParity(-14580));
	printf("%d\n", checkEvenParity(24));


}

int pack4Chars2Int(char c1, char c2, char c3, char c4) {
	unsigned int mask = 0;
	mask |= c1;
	mask <<= 8;
	mask |= c2;
	mask <<= 8;
	mask |= c3;
	mask <<= 8;
	mask |= c4;

	return mask;

}

int checkEvenParity(short input) {
	unsigned int counter = 0;
	unsigned short mask = 0;
	mask |= input;
	while (mask != 0) {
		counter += (1 & mask);
		mask >>= 1;
	}
	return counter % 2 == 0;


}