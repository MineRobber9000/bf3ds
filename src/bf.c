#include <string.h>
// Brainfuck tape is
// unsigned char tape[30000] = {0};
// Brainfuck pointer is
// unsigned char* ptr = tape;

// interpret function
char * interpret(char *program) {
	unsigned char tape[30000];
	unsigned char* ptr = tape;
	char * output;
	size_t i;
	size_t loop;
	for (i=0;program[i] != 0;i++) {
		unsigned char c = program[i];
		if (c=='>') {
			++ptr;
		}
		if (c=='<') {
			--ptr;
		}
		if (c=='+') {
			++*ptr;
		}
		if (c=='-') {
			--*ptr;
		}
		if (c=='.') {
			strcat(output,*ptr);
		}
		if (c=='[' && !(*ptr)) {
			while (program[i]!=']') {
				i++;
			}
		}
		if (c==']' && *ptr) {
			loop = 1;
			while (loop>0) {
				c = program[--i];
				if (c == '[')
					loop--;
				if (c == ']')
					loop++;
			}
		}
	}
	return output;
}
