#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
LABEL0:;
	time_t timer;
	struct tm *t;
	timer = time(NULL);
	t = localtime(&timer);
	int spec = 0;														// ����
	int age = 0;														// ����
	int howmany = 0;													// ����?
	int woodae = 0;														// ������
	int total = 0;														// �Ѿ�
	int ticket = 0;														// ����
	int price = 0;														// ����� ����
	int person = 0;														// ���� ����
	int magicpass_five = 150;											// �����н� ���̺� ����
	int magicpass_free = 50;  											// �����н� ���� ����
	int wheel = 0;														// ����� ��
	int normal = 0;														// ������� ���߿�
	int nodis = 0;
	printf("�� �� �� �� Ƽ �� �� �� ü ��\n");
LABEL:;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�LABEL
	if (t->tm_hour == 0)
	{
		goto LABEL0;
	}
	printf("==============================================================================\n");
	printf("����ð� : %d �� %d �� %d �� %d �� %d �� %d ��\n", t->tm_year + 1900, t->tm_mon +1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
	printf("�����н� 5���� ���� ���� : %d\n", magicpass_five);
	printf("�����н� Free�� ���� ���� : %d\n", magicpass_free);
	printf("������ �����ϼ���.\n");
	printf("1. ���� �̿��\n2. �����\n3. �����н� 5����\n4. �����н� Free��\n");
	scanf("%d", &ticket);
	switch (ticket)
	{
	case 1:
		printf("'���� �̿��' ����\n");
		break;
	case 2:
		printf("'�����' ����\n");
		break;
	case 3:
		if (magicpass_five == 0)
		{
			printf("�����н� 5���� �ܿ� ������ �����ϴ�.\n");
			goto LABEL;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�LABEL1
		}
		else if (magicpass_five > 0)
		{
			printf("'�����н� 5����' ���� : ");
			total = 30000;
			goto LABEL7;
			break;
		}
	case 4:
		if (magicpass_free == 0)
		{
			printf("�����н� Free�� �ܿ� ������ �����ϴ�.\n");
			goto LABEL;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�LABEL1
		}
		else if (magicpass_free > 0)
		{
			printf("'�����н� Free��' ���� : ");
			total = 100000;
			goto LABEL7;
			break;
		}
	default :
		printf("'�߸��� ���� �Դϴ�.\n");
		goto LABEL;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�LABEL1
	}
	//------------------------------------ ���� ���� �ڳ� -----------------------------------
LABEL2:;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2
	printf("=============================================================================\n");
	printf("Ƽ�� ������ �����ϼ���.\n");
	if (((t->tm_hour) >= 19) && (t->tm_hour) <= (239 / 10))//7�� ����
	{
		if (ticket == 1)
			printf("3. After7\n");
		else
			printf("3. After7 (����� �� ���)\n");
		scanf("%d", &spec);
		switch (spec)
		{
		case 1:
			printf("1�ϱ� // ���� 7�� ���ʹ� �̿� �Ұ��� �մϴ�.\n");
			goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
			break;
		case 2:
			printf("After4// ���� 7�� ���ʹ� �̿� �Ұ��� �մϴ�.\n");
			goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
			break;
		case 3:
			printf("'After7 ����\n");
			if (ticket == 1)
			{
				printf("'After7 Ƽ���� ����� �����ڸ� ��� �����մϴ�.\n");
				goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
			}
			break;
		default:
			printf("'�߸��� ���� �Դϴ�.\n");
			goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
		}
	}
	else if (((t->tm_hour) >= 16) && (t->tm_hour) <= (239 / 10))//4�� ����
	{
		if (ticket == 1)
			printf("\n2. After4\n");
		else
			printf("2. After4\n3. After7 (����� �� ���)\n");
		scanf("%d", &spec);
		switch (spec)
		{
		case 1:
			printf("'1�ϱ�'// 4�� ���ʹ� �̿� �Ұ��� �մϴ� \n");
			goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
			break;
		case 2:
			printf("'After4 ����\n");
			break;
		case 3:
			printf("'After7 ����\n");
			if (ticket == 1)
			{
				printf("'After7 Ƽ���� ����� �����ڸ� ��� �����մϴ�.\n");
				goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
			}
			break;
		default:
			printf("'�߸��� ���� �Դϴ�.\n");
			goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
		}

	}
	else if (((t->tm_hour) >= 0) && (t->tm_hour) < (16))
	{
		if (ticket == 1)
			printf("1. 1�ϱ�\n2. After4\n");
		else
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
			printf("'After7 ����\n");
			if (ticket == 1)
			{
				printf("'After7 Ƽ���� ����� �����ڸ� ��� �����մϴ�.\n");
				goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
			}
			break;
		default:
			printf("'�߸��� ���� �Դϴ�.\n");
			goto LABEL2;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL2 
		}

	}
	/*-------------------------------- Ƽ�� ���� ���� �ڳ� -----------------------------------*/
LABEL3:;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL3
	printf("=============================================================================\n");
	printf("65 �� �̻� �� 3�� �̸��� ���̺� �Դϴ�\n");
	printf("3 ~  12	�� ������ ��� �Դϴ�\n");				//		Ƽ �� �� ��			|	   �� �� �� ��		|		 �� �� �� ��		 |
	printf("13 ~ 18	�� ������ û�ҳ� �Դϴ�.\n");				// �����̿�� : ticket = 1	| 1�ϱ�  : spec = 1		| ����, ���̺� : person = 0	 |
	printf("18 ~ 64	�� ������ ��� �Դϴ�\n");				// ��  ��  �� : ticket = 2	| Aftef4 : spec = 2		| ��   ��   �� : person = 1  |
	printf("���̸� �Է��ϼ���.\n");								// ����5 ���� : ticket = 3	| After7 : spec = 3		| û   ��   �� : person = 2  |
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
		goto LABEL3;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� LABEL3
	}
	
	printf("'%d' �� �Դϴ�.\n", age);							
	
	if ((ticket == 1) && (spec == 1) && (person == 0))
		price = 13000;
	else if ((ticket == 1) && (spec == 2) && (person == 0))
		price = 13000;//  ���̺���
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
	printf("=============================================================================\n");
	printf("������ ����Ͻðڽ��ϱ�?\n");
	scanf("%d", &howmany);
	printf("'%d' ���� ����մϴ�\n", howmany);
LABEL4:;		//------------------------------------------------------------------------------- LABEL4 
	printf("=============================================================================\n");
	printf("�������� �����ϼ���.\n");
	printf("1. ����\n2. �����\n3. ����������\n");
	scanf("%d", &woodae);
	switch (woodae)													// �����
	{																// ����			woodae = 1  / 1
	case 1:															// �����		woodae = 2	/ 7
		printf("'1. ����'\n");										// ������		woodae = 3	/ 5
		woodae = 1;
		total = 1 * price;
		break;
	case 2:
		if (((t->tm_hour) >= 19) && (t->tm_hour) <= (239 / 10))
			woodae = 1;
		else
			woodae = 7;
LABEL5:;//------------------------------------------------------------------------------- LABEL5
		printf("2. �����, ����� �ο��� ����\n");
		scanf("%d", &wheel);
		normal = howmany - wheel;
		nodis = howmany - wheel * 2;
		if (wheel < 0)
		{
			printf("�߸� �Է� �ϼ̽��ϴ�\n");
			goto LABEL5;//------------------------------------------------------------------------------- LABEL5
		}
		else if (howmany < wheel)
		{
			printf("�� �ο����� Ŭ �� �����ϴ�.\n");
			goto LABEL5;//------------------------------------------------------------------------------- LABEL5
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
		if (((t->tm_hour) >= 19) && (t->tm_hour) <= (239 / 10))
			woodae = 1;
		else
			woodae = 5;
LABEL6:;//------------------------------------------------------------------------------- LABEL6
		printf("3. ����������, ������ �ο��� ����\n");
		scanf("%d", &wheel);
		normal = howmany - wheel;
		if (wheel < 0)
		{
			printf("�߸� �Է� �ϼ̽��ϴ�\n");
			goto LABEL6;//------------------------------------------------------------------------------- LABEL6
		}
		else if (howmany < wheel)
		{
			printf("�� �ο����� Ŭ �� �����ϴ�.\n");
			goto LABEL6;//------------------------------------------------------------------------------- LABEL6
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
		goto LABEL4; /*-------------------------------------------------------------------------- �߸� ���ý� LABEL4 ----*/
	}
/*-------------------------------- ��� ���� ���� �ڳ� -----------------------------------*/
	printf("==============================================================================\n");
	printf("������ %d �� �Դϴ�.\n", total);
	printf("�����մϴ�.\n");
	printf("===================================�Ե�����===================================\n");
	if (ticket == 1)
		printf("\t�����̿��\t");
	else if (ticket == 2)
		printf("\t�����\t");
	switch (spec)
	{
	case 1:
		printf("\t1�ϱ�\t");
		break;
	case 2:
		printf("\tAfter4\t");
		break;
	case 3:
		break; ("\tAfter7\t");
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
	goto LABEL;
LABEL7:;//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�LABEL7

	printf("\n============================�Ե�����============================\n\n");
	switch (ticket)
	{
	case 3:
			printf("	�����н� 5���� ����, ");
			printf("	�� �� �� %d �� �Դϴ�.\n\n", total);
			magicpass_five = magicpass_five - 1;
			break;
	case 4:
			printf("	�����н� Free�� ����, ");
			printf("	 �� �� �� %d�� �Դϴ�\n\n", total);
			magicpass_free = magicpass_free - 1;
			break;
	}
	printf("================================================================\n");
	printf("ó������ ���ư��ϴ�.\n");
	goto LABEL;
	getch();
	return 0;
	}