#include <stdio.h>
int readIntegersFromConsole(int maxNumToBeEntered);
int isEmpty(const char* line);

int main(int argc, char** argv) {
    printf("start\n");

	size_t maxNumToBeEntered = sizeof(argv); //max nums to be entered

	printf("%d", readIntegersFromConsole(maxNumToBeEntered));

    return 0;
}
int readIntegersFromConsole(int maxNumToBeEntered) {
	int n1, n2, n3;
	char line[255];
	int count = 0;
	int result = 0;

	while ((fgets(line, sizeof(line), stdin) != NULL) && (isEmpty(line) == 0))
	{
		count++;
		int current = atoi(line);

		if (current > result)
		{
			result = current;
		}

		if (count == maxNumToBeEntered)
		{
			return result;
		}
	}

	return result;
}

int isEmpty(const char* line)
{
	while (*line != '\0')
	{
		if (isspace(*line) == 0)
        {
			return 0;
        }

		line++;
	}

	return 1;
}