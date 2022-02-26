#include <stdio.h>

int main(int argc, char** argv, char* envp[])
{
	//printf("start\n");

	for (size_t i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		printf("%s\n", envp[i]);
	}

	return 0;
}