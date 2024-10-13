
#include<stdio.h>
int main()
{
	int h_sq, h_tri;
	printf("Nhap kich thuoc hinh vuong: ");
	scanf("%d", &h_sq);
	printf("Nhap chieu cao hinh tam giac: ");
	scanf("%d", &h_tri);
	if (h_sq - h_tri > 0 && (h_sq - h_tri) % 2 == 0)
	{
		for (int i = 1; i <= h_sq; i++)
		{
			for (int j = 1; j <= 2 * h_sq - 1; j++)
			{
				if (i <= (h_sq - h_tri) / 2 || i > h_sq - (h_sq - h_tri) / 2)
				{
					printf("*");
				}
				else
				{
					if (j < i + (h_sq - h_tri) / 2 || j > 2 * h_sq - (h_sq - h_tri) / 2 - i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("Khong in duoc hinh");
	}
	
}