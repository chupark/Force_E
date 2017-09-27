#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//while 쓸때 풀어줘야 할곳을 주석처리 해놨음
	//case test 용 코드 주석처리 해놨음
	char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
	int A=0, B=0, C=0, D=0, E=0, F=0, G=0;
	int total=0;

	//while (1) //반복할때 활성화
	//{ //반복할때 활성화
		printf("심리테스트 문항을 잘 읽고 선택해주세요.\n\n");
		printf("1. 하루 중 제일 기분이 좋을 때는?\n");
		printf("a) 아침\nb) 오후나 초저녁\nc) 밤\n");
		printf("입력 : ");
		scanf("%c", &q1);
		getchar();
		switch (q1)
		{
		case 'a':
			A += 2;
			break;
		case 'b':
			B += 4;
			break;
		case 'c':
			C += 6;
			break;
		}

		printf("\n2. 나는 걸을 때, 보통\n");
		printf("a) 보폭을 넓게, 빨리 걷는다.\n");
		printf("b) 보폭을 좁게, 빨리 걷는다.\n");
		printf("c) 머리를 들고, 세상을 정면으로 바라보며 적당하게 걷는다.\n");
		printf("d) 바닥을 보며 적당하게 걷는다.\n");
		printf("e) 느리게 걷는다.\n");
		printf("입력 : ");
		scanf("%c", &q2);
		getchar();
		switch (q2)
		{
		case 'a':
			A += 6;
			break;
		case 'b':
			B += 4;
			break;
		case 'c':
			C += 7;
			break;
		case 'd':
			D += 2;
			break;
		case 'e':
			E += 1;
			break;
		}

		printf("\n\n3. 사람들과 쉬면서 편안히 얘기할 때, 나는\n");
		printf("a) 팔짱을 끼는 편.\n");
		printf("b) 두 손을 마주잡는 편.\n");
		printf("c) 한 손이나 양 손을 힙이나 허리에 걸치거나 주머니에 손을 넣는 편.\n");
		printf("d) 얘기 나누는 상대방을 건드리거나 살짝 밀면서\n");
		printf("e) 내 귀나 턱이나 얼굴, 이마, 머리등을 만지작 거리면서\n");
		printf("입력 : ");
		scanf("%c", &q3);
		getchar();
		switch (q3)
		{
		case 'a':
			A += 4;
			break;
		case 'b':
			B += 2;
			break;
		case'c':
			C += 5;
			break;
		case 'd':
			D += 7;
			break;
		case 'e':
			E += 6;
			break;
		}

		printf("\n\n4. 편안히 의자에 앉아 쉴 때, 나는\n");
		printf("a) 엉덩이를 의자에 붙이고 다리를 나란히 둔다.\n");
		printf("b) 다리를 꼬고 앉는다.\n");
		printf("c) 다리를 길게 펴고 앉는다.\n");
		printf("d) 한쪽 다리는 접어 다른한쪽 허벅지에 깔고 앉는다.\n");
		printf("입력 : ");
		scanf("%c", &q4);
		getchar();
		switch (q4)
		{
		case 'a':
			A += 4;
			break;
		case 'b':
			B += 6;
			break;
		case 'c':
			C += 2;
			break;
		case 'd':
			D += 1;
			break;
		}

		printf("\n\n5. 뭔가 아주 재미있는 일이 생겼을 때, 나는\n");
		printf("a) 아주 큰 소리로 즐거움을 숨기지 않고 웃는다\n");
		printf("b) 웃지만 그다지 크지 않은 소리로 웃는다.\n");
		printf("c) 소리를 내지 않으며 웃는다.\n");
		printf("d) 살짝 미소만 짓는다.\n");
		printf("입력 : ");
		scanf("%c", &q5);
		getchar();
		switch (q5)
		{
		case 'a':
			A += 6;
			break;
		case 'b':
			B += 4;
			break;
		case 'c':
			C += 3;
			break;
		case 'd':
			D += 5;
			break;
		}

		printf("\n\n6. 파티나 사람들이 많이 모이는 장소에 나는\n");
		printf("a) 사람들이 내 존재를 의식하도록 조금은 드러나게 등장을 한다.\n");
		printf("b) 아는 사람들이 있나하며 둘러보며 들어선다.\n");
		printf("c) 시선을 끌지 않기 위해 조용히 입장한다.\n");
		printf("입력 : ");
		scanf("%c", &q6);
		getchar();
		switch (q6)
		{
		case 'a':
			A += 6;
			break;
		case 'b':
			B += 4;
			break;
		case 'c':
			C += 2;
			break;
		}

		printf("\n\n7. 풀리지 않는 무언가로 뒤척이다가 겨우 일에 몰두가 되었다.. 열심히 집중되어 몰두한채로술술 풀리며 잘 되어가는데\n");
		printf(",, 순간,, 누군가 문을 열어서 방해를 했다.. 나는..\n");
		printf("a) 휴식의 기회라고 생각하고 반갑게 맞이한다.\n");
		printf("b) 짜증이 나기도 하고, 화를 내기도 한다.\n");
		printf("c) 그냥 별로 좋지도 않고 그다지 짜증나지도 않는다.\n");
		printf("입력 : ");
		scanf("%c", &q7);
		getchar();
		switch (q7)
		{
		case 'a':
			A += 6;
			break;
		case 'b':
			B += 2;
			break;
		case 'c':
			C += 4;
			break;
		}

		printf("\n\n8. 다음 중 제일 좋아하는 색은?\n");
		printf("a) 빨강이나 오렌지\n");
		printf("b) 까만\n");
		printf("c) 노랑이나 연한 파랑\n");
		printf("d) 녹색");
		printf("e) 짙은 파랑이나 보라\n");
		printf("f) 하얀\n");
		printf("g) 갈색이나 회색\n");
		printf("입력 : ");
		scanf("%c", &q8);
		getchar();
		switch (q8)
		{
		case 'a':
			A += 6;
			break;
		case 'b':
			B += 7;
			break;
		case 'c':
			C += 5;
			break;
		case 'd':
			D += 4;
			break;
		case 'e':
			E += 3;
			break;
		case 'f':
			F += 2;
			break;
		case 'g':
			G += 1;
			break;
		}

		printf("\n\n9. 잠자리에 누웠다.. 잠들기 바로 전.. 나의 자세는 대체로\n");
		printf("a) 몸을 똑바로 누운 포즈이다.\n");
		printf("b) 엎드린 포즈이다.\n");
		printf("c) 옆으로 누운 포즈이다.\n");
		printf("d) 똑바루 누워있거나, 누워서 한 팔을 머리에 베고 있다.\n");
		printf("e) 머리를 이불속에 넣고 있다.\n");
		printf("입력 : ");
		scanf("%c", &q9);
		getchar();
		switch (q9)
		{
		case 'a':
			A += 7;
			break;
		case 'b':
			B += 6;
			break;
		case 'c':
			C += 4;
			break;
		case 'd':
			D += 2;
			break;
		case 'e':
			E += 1;
			break;
		}

		printf("\n\n10. 나는 이런 꿈을 자주 꾼다.\n");
		printf("a) 낙하하는 꿈.\n");
		printf("b) 싸우거나 도망치는 꿈.\n");
		printf("c) 무엇이나 누군가를 찾는 꿈.\n");
		printf("d) 날아오르거나 떠오르는 굼..\n");
		printf("e) 꿈은 잘 꾸지 않는다.\n");
		printf("f) 항상 좋은 느낌의 꿈만 꾼다.\n");
		printf("입력 : ");
		scanf("%c", &q10);
		getchar();
		switch (q10)
		{
		case 'a':
			A += 4;
			break;
		case 'b':
			B += 2;
			break;
		case 'c':
			C += 3;
			break;
		case 'd':
			D += 5;
			break;
		case 'e':
			E += 6;
			break;
		case 'f':
			F += 1;
			break;
		}

		total = A + B + C + D + E + F + G;
		printf("\n당신의 점수는 [ %d ]\n\n", total);/*
		printf("\n당신의 입력값 %c %c %c %c %c %c %c %c %c %c\n\n", q1, q2, q3, q4, q5, q6, q7, q8, q9, q10); //음... 여기는 테스트 하는곳임
		A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0;*/ // 반복할때 해제
		printf("결과.\n");
		if (total >= 61)
		{
			printf("주위 사람들은 당신을 ''취급주의''형^^; 이라고 생각하고 있습니다.");
			printf(" 당신은 허영심이 있고, 자기중심적이며 극히 지배적인 사람으로 비춰지고 있습니다. ");
			printf("당신을 부러워하고 우러러보며 당신처럼 되기를 바라는 사람들도 있지만, ");
			printf("당신과 너무 가까워질까 우려하며 당신을 신뢰하지는 않습니다.\n");
			printf("61점 이상  total = [ %d ]\n", total);
		}
		else if (total >= 51 && total <= 60)
		{
			printf("주위 사람들은 당신이 잘 흥분하고, 상당히 변덕스러우며, 충동적이라고 생각합니다. ");
			printf("자연스러운 리더 타입으로, 빠른 (항상 옳은 것은 아니지만) 결정을 내릴 수 있습니다. ");
			printf("당신은 과감하고 모험성이 있으며 무엇이든 한 번쯤은 시도해 보는, 찬스에 강하고 모험을 즐기는 ");
			printf("타입으로 보여집니다. 당신과 가까이 하는 사람들은 당신이 발하는 강렬함에 이끌립니다.\n");
			printf("51 <= 점수 <= 60  total = [ %d ]\n", total);
		}
		else if (total >= 41 && total <= 50)
		{
			printf("주위 사람들은 당신을 상크하고, 발랄하고, 매력적이고, 재미있고, 현실적이면서 ");
			printf("늘 즐거운 사람이라고 생각합니다. 어디서든지 주위의 이목을 사로잡는 사람이지만, ");
			printf("적당한 주제파악으로 교만해지지 않을 줄도 아는 사람이죠.\n");
			printf("당신은 다정하고 친절하며 이해심 많은 사람으로 여겨지고 있으며, 처진 기분은 업! 시켜주고 ");
			printf("어려울 땐 도와주는 사람으로 알려져 있습니다.\n");
			printf("41 <= 점수 <= 50  total = [ %d ]\n", total);
		}
		else if (total >= 31 && total <= 40)
		{
			printf("다른 사람들이보는 당신은 현명하고, 신중하고, 조심스럽고, 현실적입니다. ");
			printf("또 당신은 똑똑하고, 재능과 능력이 있으면서 한편 겸손한 사람으로도 여겨지고 있습니다. n");
			printf("당신은 친구를 사귈 때 너무 급하거나 가볍게 접근하지 않으며, 한번 사귄 친구에게는 ");
			printf("상당히 극진하고 또 자신도 그렇게 대해주기를 기대합니다.");
			printf("당신의 참모습을 알게 되는 사람들은, 당신의 친구에 대한 그 신뢰를 흔드는 것이 아주 어렵다는 것과, ");
			printf("한번 그 신뢰가 무너지면 그것을 극복하는 것도 마찬가지로 아주 오래 걸린다는 것을 깨닫게 될 것입니다.\n");
			printf("31 <= 점수 <= 40total = [ %d ]\n", total);
		}
		else if (total >= 21 && total <= 30)
		{
			printf("친구들이 보는 당신은 집요하며 깐깐한 사람. 상당히 신중하고 대단히 조심스러우며, 느리고도 꾸준하게 전진하는 사람이지요. ");
			printf("당신이 무슨 일인가를 충동적으로 하는 모습을 본다면 친구들은 상당히 충격을 받을지도 모릅니다. ");
			printf("당신은 무슨 일이든 꼼꼼히 모든 각도에서 살펴본 다음 대부분 퇴짜를 놓는 사람으로 생각되어 지고 있으니까요. ");
			printf("친구들은 당신의 이런 모습은 주로 본인의 성격에 의한 것이라고 생각하고 있습니다.\n");
			printf("21 <= 점수 <= 30  total = [ %d ]\n", total);
		}
		else if (total <= 20)
		{
			printf("친구들이 보는 당신은 부끄럼을 많이 타고, 소심하며, 우유부단하고, 누군가가 곁에서 돌봐줘야만 하며, 본인의 일도 누군가가 대신해서 ");
			printf("결정해 줘야만 하고 타인이나 어떤 일에 연루되는 것을 피하는 사람입니다. 당신은 그야말로 돈키호테, 있지도 않은 문제점들을 발견해서");
			printf(" 대응하려 드는 사람이라고 여겨집니다. 당신을 가까이서 잘 아는 사람들은 그게 사실이 아니라는 걸 알지만, 그 외 대부분의 사람들은");
			printf(" 당신을 지루하다고 볼 것입니다.\n");
			printf("20점 미만  total = [ %d ]\n", total);
		}
	//} //반복할때 활성화
	getch();
	return 0;
}

