#include <stdio.h>
#include <math.h>
void rectangle(int w, int h);
void circle(int x, int y, int r);


int main() {
    printf("start\n");

    rectangle(3, 4);
    rectangle(5,7);

    circle(1, 2, 3);
    circle(4, 3, 2);
}

void circle(int x, int y, int r) {
	int k = 0;

	for (int i = 0; i <= 2 * r; i++)
	{
		int n = 0;

		for (int j = 0; j <= 2 * r; j++)
		{
			while (k < y) {
				printf("\n");

				k++;
			}

			while (n < x) {
				printf(" ");

				n++;
			}
            //distance
			double d = sqrt((double)(i - r) * (i - r) + (j - r) * (j - r));

			if (d > r - 0.5 && d < r + 0.5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}


void rectangle(int w, int h) {
	for (int i = 0; i < w; i++)
	{
		char star = '*';
		printf("%c", star);
	}

	printf("\n");

	for (int i = 0; i < h - 2; i++)
	{
		char star = '*';
		printf("%c", star);

		for (int i = 0; i < w - 2; i++)
		{
			printf(" ");
		}

		printf("%c", star);

		printf("\n");
	}

	for (int i = 0; i < w; i++)
	{
		char star = '*';
		printf("%c", star);
	}

    printf("\n");
}