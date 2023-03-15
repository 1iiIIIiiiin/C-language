#include <stdio.h> // 헤더 파일 : 입력, 출력 함수 등
// 프로그램 작성 : 입력 -> 연산 -> 출력

void ex1() // 함수
{   
    char name[10];
    int kor, eng, mat, sci, sum;
    float avg;
    printf("이름?");
    scanf("%s", &name);

    printf("국어?");
    scanf("%d", &kor);

    printf("영어?");
    scanf("%d", &eng);

    printf("수학?");
    scanf("%d", &mat);

    printf("과학?");
    scanf("%d", &sci);

    printf("이름 : %s", name);
    printf("국어 = %d, 영어 = %d, 수학 = %d 과학 = %d", kor, eng, mat, sci);
    sum = kor+eng+mat+sci;
    avg = sum / 4.0;
    printf(" 합 = %d \n", sum);
    printf("평균 : %.2f \n", avg);

    /*
    int number; // 변수 선언
    printf("수? ");
    scanf("%d", &number); // 입력 함수
    printf("안녕하세요 \n"); // 출력 함수
    printf("입력한 수 = %d \n", number);
    printf("계산식 = %d \n", 100+5);
    printf("계식식 = %d \n", number+2);
    printf("%d \n", 100);
    printf("%d %d \n", 100);
    printf("%d %d %d\n", 100);
    */
}

void ex2()
{
    printf("%d / %d = %f \n", 100, 200, 0.5);
    printf("%c %c \n", 'a', 'k');
    printf("%s %s", "안녕", "c언어");
}

void ex3()
{
    printf("10진수 : %d \n", 123);
    printf("8진수 : %o \n", 123);
    printf("16진수 : %x \n", 123);

    printf("%d \n", 123);
    printf("%5d \n", 123);
    printf("%05d \n", 123);

    printf("%f \n", 123.45);
    printf("%7.1f \n", 123.45);
    printf("%7.3f \n", 123.45);

    printf("%s \n", "Basic-C");
    printf("%10s \n", "Basic-C");

}

void ex4()
{
    int a; // 정수
    float b; // 실수
    char c; // 문자
    char d[20]="Hello World"; // 문자열
    a = 123.45; 
    b = 200;
    c = 'T';
    printf("a의 값 ==> %d \n", a);
    printf("b의 값 ==> %f \n", b);
    printf("c의 값 ==> %c \n", c);
    printf("d의 값 ==> %s \n", d);
}

void ex5()
{
    int a, b;
    float c, d;
    a = 100;
    b = a;
    c = 111.1f;
    d = c;

    printf("a, b값 ==> %d, %d \n", a, b);
    printf("c, d값 ==> %5.1f, %7.1f \n", c, d);
    a = 200 + b;
    printf("a, b값 ==> %d, %d \n", a, b);
}

void intro()
{
    char name[13];
    int age;
    float height;
    char gender;
    char blood[3];

    printf("이름 : ");
    scanf("%s", &name);

    printf("나이 : ");
    scanf("%d", &age);

    printf("키 : ");
    scanf("%f", &height);

    getchar(); // 버퍼 지우기, 한 문자 입력 함수
    printf("성별 : ");
    scanf("%c", &gender);

    getchar(); // 버퍼 지우기, 한 문자 입력 함수
    printf("혈액형 : ");
    scanf("%s", &blood);

    printf("-------------------------------------------------- \n");
    printf("\t\t 자기소개 \n");
    printf("이름 : %s, 나이 : %d, 키 : %.1f, 성별 : %c 혈액형 : %s \n", name, age, height, gender, blood);
    printf("-------------------------------------------------- \n");
}

void p90()
{
    int a, b, c, d;

    a = 100 + 100;
    b = a + 100;
    c = a + b - 100;
    d = a + b + c;
    printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
    
    a = b = c = d = 100;
    printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);

    a = 100;
    a = a + 200;
    printf("a의 값 ==> %d \n", a);
}

void extent()
{
    int a, b, c;
    /*
    printf("가로? ");
    scanf("%d", &a);

    printf("세로? ");
    scanf("%d", &b);
    */

    printf("가로와 세로값을 입력 : ");
    scanf("%d%d", &a,&b);

    c = a*b;
    printf("사각형의 넓이 : %d \n", c);
}

int main() // 반드시 있어야 하는 주 함수, 앞에 함수 있는 경우, 맨 밑에 위치하여야 한다.
{
    //intro();
    // ex1();
    // ex2();
    // ex3();
    // ex4();
    // ex5();
    // p90();
    extent();
    return 0; // 메인 함수 종료
}

