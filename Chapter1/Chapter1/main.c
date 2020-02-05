
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592

void myInfo();
void calc();
void printGugudan();
void printStar();
void areaOfRectangle();
void areaOfCircle();
int main()
{
    myInfo();
    //calc();
    //areaOfCircle();
    //areaOfRectangle();
    //printGugudan();
    //printStar();
    return 0;
}

void printStar()
{
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");
    printf(" ***\n");
    printf("  *\n");
    
}

void printGugudan()
{
    printf("%d * %d = %d\n", 2, 1, 2);
    printf("%d * %d = %d\n", 2, 2, 4);
    printf("%d * %d = %d\n", 2, 3, 6);
    printf("%d * %d = %d\n", 2, 4, 8);
    printf("%d * %d = %d\n", 2, 5, 10);
    printf("%d * %d = %d\n", 2, 6, 12);
    printf("%d * %d = %d\n", 2, 7, 14);
    printf("%d * %d = %d\n", 2, 8, 16);
    printf("%d * %d = %d\n", 2, 9, 18);
}

void areaOfRectangle()
{
    int width, height;
    printf("가로 길이를 입력하세요: ");
    scanf("%d", &width);
    printf("세로 길이를 입력하세요: ");
    scanf("%d", &height);
    printf("직사각형의 넓이는 %d입니다.", width * height);
}

void areaOfCircle()
{
    int r;

    printf("반지름을 입력하세요: ");
    scanf("%d", &r);
    printf("원의 넓이는 %lf입니다.\n", r * r * PI);
}

void calc()
{
    int num1, num2;
    printf("두 정수를 입력하세요:");
    scanf("%d %d", &num1, &num2);
    printf("합: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("차: %d - %d = %d\n", num1, num2, num1 - num2);
}

void myInfo()
{
    printf("학번 : 2007314677, 이름 : ㅁㅁㅁ\n");
}