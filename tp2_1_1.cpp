#include <stdio.h>
#define N 4
#define M 5

int main() {
	int f,c;
	double mt[N][M], i=0;

	for(f = 0;f<N; f++)
	{
		for(c = 0;c<M; c++)
		{
			mt[f][c]=i;
			i++;
		}
	}
	for(f = 0;f<N; f++)
		{
			for(c = 0;c<M; c++)
			{
				printf("%.1lf\t", mt[f][c]);
			}
			printf("\n");
		}
		getchar();
	return 0;

}