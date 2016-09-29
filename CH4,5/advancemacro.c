// file: advancemacro.c

#include <stdio.h>

#define MESSAGE "���α׷������ �н��� �Ϲݾ���� �н��� \
						���� �ݺ��н��� �߿��ϴ�"

#define pi   3.141592
#define volume(r)   (4 * pi * cube(r) / 3)
#define square(x)  ((x) * (x) )
#define cube(x)   (square (x) * (x) )
#define mult(x, y)   ((x) * (y))

int main(void)
{
	double radius = 2.32;
	printf("�������� %.2lf�� ���� ü���� %.2lf �Դϴ�.\n", radius, volume(radius));
	printf("�Ǽ� %.2f�� ������ %.2f �Դϴ�.\n", 4.29 , square(4.29));
	printf("�Ǽ� %.2f�� ������ %.2f �Դϴ�.\n", 3.0, cube(3.0));
	printf("�Ǽ� %.2f��	 �Ǽ� %.2f�� ���� %.2f�Դϴ�.\n", 2.78, 3.62,
		mult(2.78, 3.62));
	puts(MESSAGE);
	return 0;



}