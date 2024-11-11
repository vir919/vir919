#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

void _input(char** judges_array, int k);
void _print(int* k, char* a);
void _printall(char** judges_array, int k);
void _ask(char* a);

int main()
{
    int k;
    char a[100];

    _print(&k, a);

    // 심사자 배열 메모리 할당
    char** judges_array = (char**)malloc(k * sizeof(char*));
    for (int i = 0; i < k; i++) {
        judges_array[i] = (char*)malloc(500 * sizeof(char));
    }

    // 심사자 데이터 입력
    _input(judges_array, k);

    _ask(a);

    // 심사자 데이터 출력
    _printall(judges_array, k);

    // 메모리 해제
    for (int i = 0; i < k; i++) {
        free(judges_array[i]);
    }
    free(judges_array);

    return 0;
}

void _input(char** judges_array, int k)
{
    char name[100], gender[10], organization[100], title[100], expertise[100], email[100], phone[100];

  
    for (int i = 0; i < k; i++)
    {
        printf("\n심사자 %d 정보 입력:\n", i + 1);

        printf("이름: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("성별: ");
        fgets(gender, sizeof(gender), stdin);
        gender[strcspn(gender, "\n")] = '\0';

        printf("소속: ");
        fgets(organization, sizeof(organization), stdin);
        organization[strcspn(organization, "\n")] = '\0';

        printf("직함: ");
        fgets(title, sizeof(title), stdin);
        title[strcspn(title, "\n")] = '\0';

        printf("전문분야: ");
        fgets(expertise, sizeof(expertise), stdin);
        expertise[strcspn(expertise, "\n")] = '\0';

        printf("메일: ");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = '\0';

        printf("전화: ");
        fgets(phone, sizeof(phone), stdin);
        phone[strcspn(phone, "\n")] = '\0';

        // 심사자 정보 저장
        snprintf(judges_array[i], 500,
            "이름:%s\n성별:%s\n소속:%s\n직함:%s\n전문분야:%s\n메일:%s\n전화:%s",
            name, gender, organization, title, expertise, email, phone);

    }
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("심사자 풀 입력이 끝났습니다.        \n");
    printf("++++++++++++++++++++++++++++++++++++\n");
}
void _ask(char* a)
{
    char b[2];
    printf("[%s] 심사자 풀을 확인할까요 ? Y/N ", a);
    scanf("%1s", b);  // 입력을 한 글자로 제한
    if (b[0] == 'N', 'n')
    {
        exit(0);
    }
}

void _print(int* k, char* a)
{
    printf("####################################\n");
    printf("#       심사자 풀 데이터 입력       #\n");
    printf("####################################\n");

    printf("> 참여 프로젝트: ");
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("> 심사자 풀 인원: ");
    scanf("%d", k);
    getchar(); // 버퍼 비우기

    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("%d명의 심사자 정보를 입력을 시작합니다.\n", *k);
}

void _printall(char** judges_array, int k)
{
    printf("####################################\n");
    printf("#       심사자 풀 데이터 출력       #\n");
    printf("####################################\n");

    for (int i = 0; i < k; i++)
    {
        printf("[심사자 %d]\n", i + 1);
        printf("%s\n", judges_array[i]);  // 저장된 심사자 정보 출력
        printf("-----------------------------------\n");
    }
}
