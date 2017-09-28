#include <stdio.h>
#define ARRSIZE 6
int main()
{
	int gop = 0;
	int ay = 0, bx = 0, ab_xy = 0;
	int A[ARRSIZE][ARRSIZE] = { 0 };
	int B[ARRSIZE][ARRSIZE] = { 0 };
	int count = 1;
	int y = 0, x = 0;
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
	for (y = 0; y < ARRSIZE; y++)
	{
		for (x = 0; x < ARRSIZE; x++)
			A[y][x] = count++; // 좌표값에 수를 채워넣음
	}
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
	printf("───────────────────────────────────\n\n");
	for (int y = 0; y < ARRSIZE; y++)
	{
		for (int x = 0; x < ARRSIZE; x++) {
			printf("  %d\t", A[y][x]); // 행렬을 보여줌
		}
		printf("\n\n"); 
	}
	printf("───────────────────────────────────\n\n"); 
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
	for (y = 0; y < ARRSIZE; y++)
	{
		for (x = 0; x < ARRSIZE; x++)
			B[x][y] = count++; // 좌표값에 수를 채워넣음
	}
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
	printf("───────────────────────────────────\n\n");
	for (int y = 0; y < ARRSIZE; y++)
	{
		for (int x = 0; x < ARRSIZE; x++) {
			printf("  %d\t", B[y][x]); // 행렬을 보여줌
		}
		printf("\n\n");
	}
	printf("───────────────────────────────────\n\n");
//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
	int C[ARRSIZE][ARRSIZE];
	int i = 0, j = 0;
	printf("───────────────────────────────────\n\n");
	for(ay = 0; ay < ARRSIZE; ay++) {							// BOSS임 A의 y가 제일 마지막에 변해야 y방향으로 이동
		for (bx = 0; bx < ARRSIZE; bx++) {						// No.2 임.. x가 두번째로 바뀌면서 ==>>>> 방향으로 계산가능
			C[i][j] =  0;
			for (ab_xy = 0; ab_xy < ARRSIZE; ab_xy++) {			// 쫄따구들... 항상 같이 변함
				C[i][j] += A[ay][ab_xy] * B[ab_xy][bx]; //세로를 먼저 읽으므로 y,x
				}
			printf("  %d\t", C[i][j]);
		}
		printf("\n\n");
	}printf("───────────────────────────────────\n\n");
	
	getch();
	return 0;
}