#include <stdio.h>
int main(void)
{
	int p, q, i, j, a[100][100], b[100][100];

	printf("���� �Է��ϼ���:");
	scanf("%d", &p);
	printf("���� �Է��ϼ���:");
	scanf("%d", &q);

	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("���� ��� ���\n");
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
	printf("��ġ�� ��� ���\n");
	
		
	
		
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
	
