#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _score
{
	char name[12];
	int kor, eng, math, tot;
	float ave;
}SCORE;

int main(void)
{
	SCORE* p = NULL;

	p = (SCORE*)malloc(sizeof(SCORE));
	if (p == NULL)
	{
		printf("�޸� �Ҵ� ���� \n");
	}

	strcpy_s(p->name, "ȫ�浿");
	p->kor = 70;
	p->eng = 80;
	p->math = 90;

	p->tot = p->kor + p->eng + p->math;
	p->ave = (float)(p->kor + p->eng + p->math) / 3;

	printf("%s, %d, %d, %d, %d, %.2f \n", p->name, p->kor, p->math, p->tot, p->ave);

	return 0;

}