#include <stdio.h> /* 여러 줄 주석 */ // : 한 줄 주석
#include <string.h>
#include <windows.h>

void ex1()
{
    printf("안녕하세요 ^^ \n");
    printf("%d, %f, %c, %s \n", 15, 3.14, 'T', "Tom");
    
    int a; // 선언
    float b; //
    char c;
    char d[8]="소년"; // 초기화
    
    a = 20; // 초기화
    b = 9.7f; 
    c = 'p';
    printf("%d, %f, %c, %s \n", a, b, c, d);
    a = 30;
    b = 12.4566F;
    c = 'Y';
    printf("%5d, %7.2f, %3c, %10s \n", a, b, c, d);
    printf("입락하시오 >> ");
    /*
    scanf("%d", &a);
    scanf("%f", &b);
    getchar(); // 1문자 입력, 버퍼 지우기
    scanf("%c", &c);
    getchar(); // 1문자 입력, 버퍼 지우기
    scanf("%s", &d);
    */
    scanf("%d%f %c %s", &a, &b, &c, &d);
    printf("%5d, %7.2f, %3c, %10s \n", a, b, c, d);
}

void ex2()
{
    printf("이름과 나이를 입력 >> ");
    char name[20];
    int age;
    scanf("%s %d", &name, &age);
    printf("이름=%s 만 나이=%d \n", name, age-1);
}

void ex3()
{
    printf("10진수를 입력 >> ");
    int s;
    scanf("%d", &s);
    printf("10진수 = %d, 8진수 = %o, 16진수 = %x \n", s, s, s);
}

void ex4()
{
    short a; //
    int b; // 정수는 int가 기본
    float c;
    double d;
    char e;
    char f[10];
    a = 32768; // -32768 ~ 32767
    printf("short형 = %d, 크기 = %d \n", a, sizeof(a));
    b = 123348484; // -21억 ~ 21억
    printf("int형 = %d, 크기 = %d \n", b, sizeof(b));
    c = 96969674342.434888f;
    d = 389342893429.8459854;
    printf("float형 = %.2f, 크기 = %d \n", c, sizeof(c));
    printf("double형 = %.3f, 크기 = %d \n", d, sizeof(d));
    e = 't';
    printf("char형 = %c, 크기 = %d \n", e, sizeof(e));
    strcpy(f,"security"); // f = "security"는 오류
    printf("char 문자열형 = %s, 크기 = %d \n", f, sizeof(f));
    printf("i = %c \n", f[5]);
}

void ex5()
{
    int a, b, c;
    printf("두 수를 입력 >>");
    scanf("%d %d", &b, &c);

    a = b + c;
    printf("%d + %d = %d \n", b, c, a);
    
    a = b - c;
    printf("%d - %d = %d \n", b, c, a);

    a = b / c;
    printf("%d / %d = %d \n", b, c, a);

    a = b % c;
    printf("%d %% %d = %d \n", b, c, a);
}

void ex6()
{
    int a=2, b=3, c=4;
    int result1, mok, namugi;
    float result2;
    
    result1 = a + b - c;
    printf("%d + %d - %d = %d \n", a, b, c, result1);

    result1 = a + b * c;
    printf("%d + %d * %d = %d \n", a, b, c, result1);

    result2 = a * b / (float) c;
    printf("%d * %d / %d = %f \n", a, b, c, result2);

    mok = c / b;
    printf("%d / %d의 몫은 %d \n", c, b, mok);

    namugi = c % b;
    printf("%d %% %d의 나머지는 %d \n", c, b, namugi);
}

void circle()
{
    int rad; // 반지름
    double area, cround; // 넓이, 둘레
    printf("반지름? ");
    scanf("%d", &rad);
    area = rad * rad * 3.14;
    printf("원 넓이 = %.2f \n", area);
    cround = 2 * rad * 3.14;
    printf("원 둘레 = %.2f \n", cround);
}

void sungjuk()
{
    char name[20];
    int kor, eng, mat, sum;
    float avg;

    printf("이름? ");
    scanf("%s", &name);

    printf("국어? ");
    scanf("%d", &kor);

    printf("영어? ");
    scanf("%d", &eng);

    printf("수학? ");
    scanf("%d", &mat);

    system("cls"); // 화면 지우기

    sum = kor + eng + mat;
    avg = (float)sum / 3;

    system("pause"); // 잠시 멈추기
    sleep(5000) // 5초 멈추기
    
    printf("%s의 합계 = %d, 평균 = %.1f \n", name, sum, avg);
}
int main()
{
    // ex1(); // 함수 호출
    // ex2();
    // ex3();
    // ex4();
    // ex5();
    // ex6();
    // circle();
    sungjuk();
    return 0;
}