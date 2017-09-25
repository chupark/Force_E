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
	int spec = 0;														// 掘碟
	int age = 0;														// 釭檜
	int howmany = 0;													// 賃濰?
	int woodae = 0;														// 辦渠餌о
	int total = 0;														// 識擋
	int ticket = 0;														// 掏謙
	int price = 0;														// 啗骯瞪 陛問
	int person = 0;														// 釭檜 掘碟
	int magicpass_five = 150;											// 衙霜ぬ蝶 だ檜粽 熱榆
	int magicpass_free = 50;  											// 衙霜ぬ蝶 Щ葬 熱榆
	int wheel = 0;														// 濰擁檣 熱
	int normal = 0;														// 綠濰擁檣 摹嫦辨
	int nodis = 0;
	printf("煜 等 錯 萄 じ 鰍 嫦 掏 羹 啗\n");
LABEL:;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天LABEL
	if (t->tm_hour == 0)
	{
		goto LABEL0;
	}
	printf("==============================================================================\n");
	printf("⑷營衛除 : %d 喇 %d 錯 %d 橾 %d 衛 %d 碟 %d 蟾\n", t->tm_year + 1900, t->tm_mon +1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
	printf("衙霜ぬ蝶 5謙掏 陴擎 熱榆 : %d\n", magicpass_five);
	printf("衙霜ぬ蝶 Free掏 陴擎 熱榆 : %d\n", magicpass_free);
	printf("掏謙擊 摹鷗ж撮蹂.\n");
	printf("1. 濠嶸 檜辨掏\n2. 殮濰掏\n3. 衙霜ぬ蝶 5謙掏\n4. 衙霜ぬ蝶 Free掏\n");
	scanf("%d", &ticket);
	switch (ticket)
	{
	case 1:
		printf("'濠嶸 檜辨掏' 摹鷗\n");
		break;
	case 2:
		printf("'殮濰掏' 摹鷗\n");
		break;
	case 3:
		if (magicpass_five == 0)
		{
			printf("衙霜ぬ蝶 5謙掏 濤罹 熱榆檜 橈蝗棲棻.\n");
			goto LABEL;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天LABEL1
		}
		else if (magicpass_five > 0)
		{
			printf("'衙霜ぬ蝶 5謙掏' 摹鷗 : ");
			total = 30000;
			goto LABEL7;
			break;
		}
	case 4:
		if (magicpass_free == 0)
		{
			printf("衙霜ぬ蝶 Free掏 濤罹 熱榆檜 橈蝗棲棻.\n");
			goto LABEL;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天LABEL1
		}
		else if (magicpass_free > 0)
		{
			printf("'衙霜ぬ蝶 Free掏' 摹鷗 : ");
			total = 100000;
			goto LABEL7;
			break;
		}
	default :
		printf("'澀跤脹 摹鷗 殮棲棻.\n");
		goto LABEL;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天LABEL1
	}
	//------------------------------------ 掏謙 摹鷗 囀傘 -----------------------------------
LABEL2:;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2
	printf("=============================================================================\n");
	printf("じ鰍 掘碟擊 摹鷗ж撮蹂.\n");
	if (((t->tm_hour) >= 19) && (t->tm_hour) <= (239 / 10))//7衛 檜��
	{
		if (ticket == 1)
			printf("3. After7\n");
		else
			printf("3. After7 (殮濰掏 橾 唳辦)\n");
		scanf("%d", &spec);
		switch (spec)
		{
		case 1:
			printf("1橾掏 // 盪喔 7衛 睡攪朝 檜辨 碳陛棟 м棲棻.\n");
			goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
			break;
		case 2:
			printf("After4// 盪喔 7衛 睡攪朝 檜辨 碳陛棟 м棲棻.\n");
			goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
			break;
		case 3:
			printf("'After7 摹鷗\n");
			if (ticket == 1)
			{
				printf("'After7 じ鰍擎 殮濰掏 掘衙濠虜 餌辨 陛棟м棲棻.\n");
				goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
			}
			break;
		default:
			printf("'澀跤脹 摹鷗 殮棲棻.\n");
			goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
		}
	}
	else if (((t->tm_hour) >= 16) && (t->tm_hour) <= (239 / 10))//4衛 檜��
	{
		if (ticket == 1)
			printf("\n2. After4\n");
		else
			printf("2. After4\n3. After7 (殮濰掏 橾 唳辦)\n");
		scanf("%d", &spec);
		switch (spec)
		{
		case 1:
			printf("'1橾掏'// 4衛 睡攪朝 檜辨 碳陛棟 м棲棻 \n");
			goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
			break;
		case 2:
			printf("'After4 摹鷗\n");
			break;
		case 3:
			printf("'After7 摹鷗\n");
			if (ticket == 1)
			{
				printf("'After7 じ鰍擎 殮濰掏 掘衙濠虜 餌辨 陛棟м棲棻.\n");
				goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
			}
			break;
		default:
			printf("'澀跤脹 摹鷗 殮棲棻.\n");
			goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
		}

	}
	else if (((t->tm_hour) >= 0) && (t->tm_hour) < (16))
	{
		if (ticket == 1)
			printf("1. 1橾掏\n2. After4\n");
		else
			printf("1. 1橾掏\n2. After4\n3. After7 (殮濰掏 橾 唳辦)\n");
		scanf("%d", &spec);
		switch (spec)
		{
		case 1:
			printf("'1橾掏' 摹鷗\n");
			break;
		case 2:
			printf("'After4 摹鷗\n");
			break;
		case 3:
			printf("'After7 摹鷗\n");
			if (ticket == 1)
			{
				printf("'After7 じ鰍擎 殮濰掏 掘衙濠虜 餌辨 陛棟м棲棻.\n");
				goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
			}
			break;
		default:
			printf("'澀跤脹 摹鷗 殮棲棻.\n");
			goto LABEL2;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL2 
		}

	}
	/*-------------------------------- じ鰍 掘碟 摹鷗 囀傘 -----------------------------------*/
LABEL3:;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL3
	printf("=============================================================================\n");
	printf("65 撮 檜鼻 塽 3撮 嘐虜擎 漆檜綠 殮棲棻\n");
	printf("3 ~  12	撮 梱雖朝 橫萼檜 殮棲棻\n");				//		じ 鰍 掘 碟			|	   掏 謙 掘 碟		|		 釭 檜 掘 碟		 |
	printf("13 ~ 18	撮 梱雖朝 羶模喇 殮棲棻.\n");				// 濠嶸檜辨掏 : ticket = 1	| 1橾掏  : spec = 1		| 喻檣, 漆檜綠 : person = 0	 |
	printf("18 ~ 64	撮 梱雖朝 橫萼檜 殮棲棻\n");				// 殮  濰  掏 : ticket = 2	| Aftef4 : spec = 2		| 橫   萼   檜 : person = 1  |
	printf("釭檜蒂 殮溘ж撮蹂.\n");								// 衙霜5 謙掏 : ticket = 3	| After7 : spec = 3		| 羶   模   喇 : person = 2  |
	scanf("%d", &age);											// 衙霜Щ葬掏 : ticket = 4  |						|   橫    艇   : person = 3	 |
	if (age >= 65)
		person = 1;	// 喻檣
	else if ((age > 0) && (age < 3))
		person = 0; // 漆檜綠
	else if ((age >= 3) && (age < 13))
		person = 1; // 橫萼檜
	else if ((age >= 13) && (age < 19))
		person = 2; // 羶模喇
	else if ((age >= 19) && (age < 65))
		person = 3; // 橫艇
	else if (age <= 0)
	{
		printf("澀跤 殮溘ж樟蝗棲棻");
		goto LABEL3;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天 LABEL3
	}
	
	printf("'%d' 撮 殮棲棻.\n", age);							
	
	if ((ticket == 1) && (spec == 1) && (person == 0))
		price = 13000;
	else if ((ticket == 1) && (spec == 2) && (person == 0))
		price = 13000;//  漆檜綠蹂旎
	else if ((ticket == 1) && (spec == 1) && (person == 3))						/* 		 じ 鰍 掘 碟			|	   掏 謙 掘 碟		|		 釭 檜 掘 碟		 | */
		price = 52000;															/*	// 濠嶸檜辨掏 : ticket = 1	| 1橾掏  : spec = 1		| 漆   檜   綠 : person = 0	 | */
	else if ((ticket == 1) && (spec == 2) && (person == 3))						/*	// 殮  濰  掏 : ticket = 2	| Aftef4 : spec = 2		| 喻檣, 橫萼檜 : person = 1  | */
		price = 41000;															/*	// 衙霜5 謙掏 : ticket = 3	| After7 : spec = 3		| 羶   模   喇 : person = 2  | */
	else if ((ticket == 2) && (spec == 1) && (person == 3))						/*	// 衙霜Щ葬掏 : ticket = 4  |						|   橫    艇   : person = 3	 | */
		price = 36000;
	else if ((ticket == 2) && (spec == 2) && (person == 3))
		price = 30000;
	else if ((ticket == 2) && (spec == 3) && (person == 3))
		price = 18000;//橫艇蹂旎ル
	else if ((ticket == 1) && (spec == 1) && (person == 2))
		price = 45000;
	else if ((ticket == 1) && (spec == 2) && (person == 2))
		price = 36000;
	else if ((ticket == 2) && (spec == 1) && (person == 2))
		price = 32000;
	else if ((ticket == 2) && (spec == 2) && (person == 2))
		price = 27000;
	else if ((ticket == 2) && (spec == 3) && (person == 2))
		price = 16000;//羶模喇 蹂旎ル
	else if ((ticket == 1) && (spec == 1) && (person == 1))
		price = 41000;
	else if ((ticket == 1) && (spec == 2) && (person == 1))
		price = 32000;
	else if ((ticket == 2) && (spec == 1) && (person == 1))
		price = 29000;
	else if ((ticket == 2) && (spec == 2) && (person == 1))
		price = 24000;
	else if ((ticket == 2) && (spec == 3) && (person == 1))
		price = 14000;//橫萼檜 蹂旎ル

	/*-------------------------------- 釭檜      摹鷗 囀傘 -----------------------------------*/
	printf("=============================================================================\n");
	printf("賃濰擊 轎溘ж衛啊蝗棲梱?\n");
	scanf("%d", &howmany);
	printf("'%d' 濰擊 轎溘м棲棻\n", howmany);
LABEL4:;		//------------------------------------------------------------------------------- LABEL4 
	printf("=============================================================================\n");
	printf("辦渠餌о擊 摹鷗ж撮蹂.\n");
	printf("1. 橈擠\n2. 濰擁檣\n3. 措陛嶸奢濠\n");
	scanf("%d", &woodae);
	switch (woodae)													// 辦渠蹂旎
	{																// 橈擠			woodae = 1  / 1
	case 1:															// 濰擁檣		woodae = 2	/ 7
		printf("'1. 橈擠'\n");										// 嶸奢濠		woodae = 3	/ 5
		woodae = 1;
		total = 1 * price;
		break;
	case 2:
		if (((t->tm_hour) >= 19) && (t->tm_hour) <= (239 / 10))
			woodae = 1;
		else
			woodae = 7;
LABEL5:;//------------------------------------------------------------------------------- LABEL5
		printf("2. 濰擁檣, 濰擁檣 檣錳熱 摹鷗\n");
		scanf("%d", &wheel);
		normal = howmany - wheel;
		nodis = howmany - wheel * 2;
		if (wheel < 0)
		{
			printf("澀跤 殮溘 ж樟蝗棲棻\n");
			goto LABEL5;//------------------------------------------------------------------------------- LABEL5
		}
		else if (howmany < wheel)
		{
			printf("識 檣錳爾棻 贗 熱 橈蝗棲棻.\n");
			goto LABEL5;//------------------------------------------------------------------------------- LABEL5
		}
		else if (nodis <= 0)
		{
			total = (price * woodae * howmany) / 10;
			printf("%d 貲", wheel);
		}
		else if (nodis > 0)
		{
			total = (nodis * price) + (2 * wheel * woodae * price) / 10;
			printf("%d 貲", wheel);
		}
		break;
	case 3:
		if (((t->tm_hour) >= 19) && (t->tm_hour) <= (239 / 10))
			woodae = 1;
		else
			woodae = 5;
LABEL6:;//------------------------------------------------------------------------------- LABEL6
		printf("3. 措陛嶸奢濠, 嶸奢濠 檣錳熱 摹鷗\n");
		scanf("%d", &wheel);
		normal = howmany - wheel;
		if (wheel < 0)
		{
			printf("澀跤 殮溘 ж樟蝗棲棻\n");
			goto LABEL6;//------------------------------------------------------------------------------- LABEL6
		}
		else if (howmany < wheel)
		{
			printf("識 檣錳爾棻 贗 熱 橈蝗棲棻.\n");
			goto LABEL6;//------------------------------------------------------------------------------- LABEL6
		}
		else if (nodis <= 0)
		{
			total = (price * woodae * howmany) / 10;
			printf("%d 貲\n", wheel);
		}
		else if (nodis > 0)
		{
			total = (nodis * price) + (2 * wheel * woodae * price) / 10;
			printf("%d 貲\n", wheel);
			printf("%d", total);
		}
		break;
	default:
		printf("'澀跤脹 摹鷗 殮棲棻.\n");
		goto LABEL4; /*-------------------------------------------------------------------------- 澀跤 摹鷗衛 LABEL4 ----*/
	}
/*-------------------------------- 辦渠 餌о 摹鷗 囀傘 -----------------------------------*/
	printf("==============================================================================\n");
	printf("陛問擎 %d 錳 殮棲棻.\n", total);
	printf("馬餌м棲棻.\n");
	printf("===================================煜等錯萄===================================\n");
	if (ticket == 1)
		printf("\t濠嶸檜辨掏\t");
	else if (ticket == 2)
		printf("\t殮濰掏\t");
	switch (spec)
	{
	case 1:
		printf("\t1橾掏\t");
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
		printf("喻檣,漆檜綠\t");
		break;
	case 1:
		printf("橫萼檜\t");
		break;
	case 2:
		printf("羶模喇\t");
		break;
	case 3:
		printf("撩檣\t");
		break;
	}
	printf("濰熱 : %d\t", howmany);
	if (woodae == 1)
		printf("橈擠\t");
	else if (woodae == 7)
		printf("濰擁檣 %d 檣\t", wheel);
	else if (woodae == 5)
		printf("措陛嶸奢濠 %d 檣\t", wheel);
	printf(" %d\n\n\n", total);
	printf("==============================================================================\n");
	printf("籀擠戲煎 給嬴骨棲棻.\n");
	goto LABEL;
LABEL7:;//天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天天LABEL7

	printf("\n============================煜等錯萄============================\n\n");
	switch (ticket)
	{
	case 3:
			printf("	衙霜ぬ蝶 5謙掏 摹鷗, ");
			printf("	陛 問 擎 %d 錳 殮棲棻.\n\n", total);
			magicpass_five = magicpass_five - 1;
			break;
	case 4:
			printf("	衙霜ぬ蝶 Free掏 摹鷗, ");
			printf("	 陛 問 擎 %d錳 殮棲棻\n\n", total);
			magicpass_free = magicpass_free - 1;
			break;
	}
	printf("================================================================\n");
	printf("籀擠戲煎 給嬴骨棲棻.\n");
	goto LABEL;
	getch();
	return 0;
	}