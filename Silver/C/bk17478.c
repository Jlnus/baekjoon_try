#include <stdio.h>

void space(int n)
{
	for (; n > 0; n--)
	{
		printf("____");
	}
}

void rec(int cnt, int spcnt)
{
	if (cnt == 0)
	{
		space(spcnt - cnt);
		printf("\"����Լ��� ������?\"\n");
		space(spcnt - cnt);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		return;
	}
	space(spcnt - cnt);
	printf("\"����Լ��� ������?\"\n");
	space(spcnt - cnt);
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	space(spcnt - cnt);
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	space(spcnt - cnt);
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	cnt--;
	rec(cnt, spcnt);
	space(spcnt - cnt);
	printf("��� �亯�Ͽ���.\n");
}

int main()
{
	int n;

	scanf("%d", &n);
	int spcnt = n, cnt = n;
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	rec(cnt, spcnt);
	printf("��� �亯�Ͽ���.\n");
}