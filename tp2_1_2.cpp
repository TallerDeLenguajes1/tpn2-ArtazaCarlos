#include <iostream>
#define N 4
#define M 5

int main() {
	int f,c;
	double mt[N][M], *p_mt, i=0;
	p_mt=&mt[0][0];
	for(f = 0;f<N; f++)
	{
		for(c = 0;c<M; c++)
		{
			*(p_mt+(f*5+c))=i;
			i++;
		}
	}
	for(f = 0;f<N; f++)
		{
			for(c = 0;c<M; c++)
			{
				printf("%.1lf\t", *(p_mt+(f*5+c)));
			}
			printf("\n");
		}
	return 0;

}