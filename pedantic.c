#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	
	unsigned char* buffer = (unsigned char*)malloc(64);
	memset(buffer, 0, 64);
	
	*((int*)(buffer)) = 58947;
	
	printf("%X\n", *((int*)(buffer)));
	
	printf("%X\n", (*buffer));
	printf("%X\n", *(buffer+1));
	printf("%X\n", *(buffer+2));
	printf("%X\n", *(buffer+3));
	
	free(buffer);
	
    return 0;
}
