#include <stdio.h>
int main(void)
{
	int p, q, i, j, a[100][100], b[100][100];

	printf("행을 입력하세요:");
	scanf("%d", &p);
	printf("열을 입력하세요:");
	scanf("%d", &q);

	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("원래 행렬 출력\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%3d",a[i][j]);
		}
		if (j = q-1)
			puts("");
	}
	puts("");
	printf("전치된 행렬 출력\n");
	
		
	
		
	for (j= 0; j < q; j++)
	   {
		for (i = 0; i < p; i++)
		{
			printf("%3d", a[i][j]);
		}
		if (i =p-1)
			puts("");
		
	}
	return 0;
}
	
