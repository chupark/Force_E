#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
		int spec = 0;														// ����
		int age = 0;														// ����
		int howmany = 0;													// ����?
		int woodae = 0;														// ������
		int total = 0;														// �Ѿ�
		int ticket = 0;														// ����
		int price = 0;														// ����� ����
		int person = 0;														// ���� ����
		int magicpass_five = 150; 											// �����н� ���̺� ����
		int magicpass_free = 50;  											// �����н� ���� ����
		int wheel = 0;														// ����� ��
		int freturn = 0;													// ���ư��� �뵵
		int normal = 0;														// ������� ���߿�
		int nodis = 0;														// ���� ������
		int devide = 0;
		int dis = 0;
		printf("�� �� �� �� Ƽ �� �� �� ü ��\n");
		while (1)
		{

			printf("===============================================================\n");
			while (ticket < 1 || ticket > 2)
			{
				printf("������ �����ϼ���.\n");
				printf("1. ���� �̿��\n2. �����\n");
				scanf("%d", &ticket);

				switch (ticket)
				{
				case 1:
					printf("'���� �̿��' ����\n");
					break;
				case 2:
					printf("'�����' ����\n");
					break;
				}
			}
			printf("%d", ticket);
			printf("===============================================================\n");
			while (spec < 1 || spec > 3)
			{
				printf("Ƽ�� ������ �����ϼ���.\n");
				printf("1. 1�ϱ�\n2. After4\n3. After7 (����� �� ���)\n");
				scanf("%d", &spec);
				switch (spec)
				{
				case 1:
					printf("'1�ϱ�' ����\n");
					break;
				case 2:
					printf("'After4 ����\n");
					break;
				case 3:
					if ((ticket == 1) && (spec == 3))
					{
						printf("'After7 ����_�����̿���� ���� �Ұ�\n");
						spec = 0;
						continue;
					}
					else if (ticket == 2)
						printf("'After7 ����\n");
				}
			}
			printf("%d", spec);


			/*-------------------------------- Ƽ�� ���� ���� �ڳ� -----------------------------------*/
			printf("===============================================================\n");
			printf("65 �� �̻� �� 3�� �̸��� ���̺� �Դϴ�\n");
			printf("3 ~  12	�� ������ ��� �Դϴ�\n");				//		Ƽ �� �� ��			|	   �� �� �� ��		|		 �� �� �� ��		 |
			printf("13 ~ 18	�� ������ û�ҳ� �Դϴ�.\n");				// �����̿�� : ticket = 1	| 1�ϱ�  : spec = 1		| ����, ���̺� : person = 0	 |
			printf("18 ~ 64	�� ������ ��� �Դϴ�\n");				// ��  ��  �� : ticket = 2	| Aftef4 : spec = 2		| ��   ��   �� : person = 1  |
																// ����5 ���� : ticket = 3	| After7 : spec = 3		| û   ��   �� : person = 2  |
			printf("���̸� �Է��ϼ���.\n");
			scanf("%d", &age);											// ���������� : ticket = 4  |						|   ��    ��   : person = 3	 |
			if (age >= 65)
				person = 1;	// ����
			else if ((age > 0) && (age < 3))
				person = 0; // ���̺�
			else if ((age >= 3) && (age < 13))
				person = 1; // ���
			else if ((age >= 13) && (age < 19))
				person = 2; // û�ҳ�
			else if ((age >= 19) && (age < 65))
				person = 3; // �
			else if (age <= 0)
			{
				printf("�߸� �Է��ϼ̽��ϴ�");
			}

			printf("'%d' �� �Դϴ�.\n", age);

			if ((ticket == 1) && (spec == 1) && (person == 0))
				price = 13000;
			else if ((ticket == 1) && (spec == 2) && (person == 0))
				price = 13000;// ��� �׸��� �ֱ�鵵 ���̺���
			else if ((ticket == 1) && (spec == 1) && (person == 3))						/* 		 Ƽ �� �� ��			|	   �� �� �� ��		|		 �� �� �� ��		 | */
				price = 52000;															/*	// �����̿�� : ticket = 1	| 1�ϱ�  : spec = 1		| ��   ��   �� : person = 0	 | */
			else if ((ticket == 1) && (spec == 2) && (person == 3))						/*	// ��  ��  �� : ticket = 2	| Aftef4 : spec = 2		| ����, ��� : person = 1  | */
				price = 41000;															/*	// ����5 ���� : ticket = 3	| After7 : spec = 3		| û   ��   �� : person = 2  | */
			else if ((ticket == 2) && (spec == 1) && (person == 3))						/*	// ���������� : ticket = 4  |						|   ��    ��   : person = 3	 | */
				price = 36000;
			else if ((ticket == 2) && (spec == 2) && (person == 3))
				price = 30000;
			else if ((ticket == 2) && (spec == 3) && (person == 3))
				price = 18000;//����ǥ
			else if ((ticket == 1) && (spec == 1) && (person == 2))
				price = 45000;
			else if ((ticket == 1) && (spec == 2) && (person == 2))
				price = 36000;
			else if ((ticket == 2) && (spec == 1) && (person == 2))
				price = 32000;
			else if ((ticket == 2) && (spec == 2) && (person == 2))
				price = 27000;
			else if ((ticket == 2) && (spec == 3) && (person == 2))
				price = 16000;//û�ҳ� ���ǥ
			else if ((ticket == 1) && (spec == 1) && (person == 1))
				price = 41000;
			else if ((ticket == 1) && (spec == 2) && (person == 1))
				price = 32000;
			else if ((ticket == 2) && (spec == 1) && (person == 1))
				price = 29000;
			else if ((ticket == 2) && (spec == 2) && (person == 1))
				price = 24000;
			else if ((ticket == 2) && (spec == 3) && (person == 1))
				price = 14000;//��� ���ǥ

			/*-------------------------------- ����      ���� �ڳ� -----------------------------------*/
			printf("===============================================================\n");
			printf("������ ����Ͻðڽ��ϱ�?\n");
			scanf("%d", &howmany);
			printf("'%d' ���� ����մϴ�\n", howmany);
			printf("===============================================================\n");
			while (woodae > 1 || woodae < 3)
			{
				printf("�������� �����ϼ���.\n");
				printf("1. ����\n2. �����\n3. ����������\n");
				scanf("%d", &woodae);
				switch (woodae)													// �����
				{																// ����			woodae = 1  / 1
				case 1:															// �����		woodae = 2	/ 7
					printf("'1. ����'\n");										// ������		woodae = 3	/ 5
					woodae = 1;
					total = 1 * howmany * price;
					break;
				case 2:
					woodae = 7;
					printf("2. �����, ����� �ο��� ����\n");
					scanf("%d", &wheel);
					normal = howmany - wheel;
					nodis = howmany - wheel * 2;;
					if (wheel < 0)
					{
						printf("�߸� �Է� �ϼ̽��ϴ�\n");
					}
					else if (howmany < wheel)
					{
						printf("�� �ο����� Ŭ �� �����ϴ�.\n");
					}
					else if (nodis <= 0)
					{
						total = (price * woodae * howmany) / 10;
						printf("%d ��", wheel);
					}
					else if (nodis > 0)
					{
						total = (nodis * price) + (2 * wheel * woodae * price) / 10;
						printf("%d ��", wheel);
					}
					break;
				case 3:
					woodae = 5;
					printf("3. ����������, ������ �ο��� ����\n");
					scanf("%d", &wheel);
					normal = howmany - wheel;
					nodis = howmany - wheel * 2;
					if (wheel < 0)
					{
						printf("�߸� �Է� �ϼ̽��ϴ�\n");
					}
					else if (howmany < wheel)
					{
						printf("�� �ο����� Ŭ �� �����ϴ�.\n");
					}
					else if (nodis <= 0)
					{
						total = (price * woodae * howmany) / 10;
						printf("%d ��\n", wheel);
					}
					else if (nodis > 0)
					{
						total = (nodis * price) + (2 * wheel * woodae * price) / 10;
						printf("%d ��\n", wheel);
						printf("%d", total);
					}
					break;
				default:
					printf("'�߸��� ���� �Դϴ�.\n");
				}
			}
			/*-------------------------------- ��� ���� ���� �ڳ� -----------------------------------*/
			printf("==============================================================================\n");
			printf("������ %d �� �Դϴ�.\n", total);
			printf("�����մϴ�.\n");
			printf("===================================�Ե�����===================================\n");
			if (ticket == 1)
				printf("�����̿��\t");
			else if (ticket == 2)
				printf("�����\t");
			switch (spec)
			{
			case 1:
				printf("1�ϱ�\t");
				break;
			case 2:
				printf("After4\t");
				break;
			case 3:
				printf("After7\t");
				break;
			}
			switch (person)
			{
			case 0:
				printf("����,���̺�\t");
				break;
			case 1:
				printf("���\t");
				break;
			case 2:
				printf("û�ҳ�\t");
				break;
			case 3:
				printf("����\t");
				break;
			}
			printf("��� : %d\t", howmany);
			if (woodae == 1)
				printf("����\t");
			else if (woodae == 7)
				printf("����� %d ��\t", wheel);
			else if (woodae == 5)
				printf("���������� %d ��\t", wheel);
			printf(" %d\n\n\n", total);
			printf("==============================================================================\n");
			printf("ó������ ���ư��ϴ�.\n");
		}
	getchar();
	return 0;
	}