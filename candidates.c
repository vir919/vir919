#include <stdio.h>
#include <string.h>

void _input(char array[][12][100]);  

int main()
{
    char array[5][12][100];
    _input(array);

    for (int k = 0; k < 5; k++)
    {
        printf("##########################################\n");
        printf("           오디션 후보자 데이터 조회\n");
        printf("##########################################\n");
        printf("============================================================================================\n");
        printf("성   명 | 생   일      | 성별 | 메   일          | 국적 | BMI  | 주스킬  | 보조스킬  | TOPIK | MBTI \n");
        printf("============================================================================================\n");
        printf("%s | %s | %s  | %s | %s  | %s | %s  | %s  | %s | %s\n",
            array[k][1], array[k][2], array[k][3], array[k][4], array[k][5],
            array[k][6], array[k][7], array[k][8], array[k][9], array[k][10]);
        printf("--------------------------------------------------------------------------------------------\n");
        printf("소개: %s\n", array[k][11]);  // 소개 출력
        printf("--------------------------------------------------------------------------------------------\n");
        printf("무한한 열정과 창의성을 갖춘 댄서이자 작곡가로, 함께 꿈을 향해 달려갈 준비가 되어 있습니다.\n");
        printf("============================================================================================\n\n");
    }

    return 0;
}

void _input(char array[][12][100])  // 크기를 맞추기 위해 두 번째 차원을 12로 수정
{
    for (int k = 0; k < 5; k++)
    {
        printf("\n%d번째 후보자의 정보를 입력하세요.\n", k + 1);

        printf("1. 성명: ");
        fgets(array[k][1], 100, stdin);
        array[k][1][strcspn(array[k][1], "\n")] = '\0';  

        printf("2. 생일(YYYY/MM/DD 형식): ");
        fgets(array[k][2], 100, stdin);
        array[k][2][strcspn(array[k][2], "\n")] = '\0';

        printf("3. 성별(여성이면 F 또는 남성이면 M): ");
        fgets(array[k][3], 100, stdin);
        array[k][3][strcspn(array[k][3], "\n")] = '\0';

        printf("4. 메일 주소: ");
        fgets(array[k][4], 100, stdin);
        array[k][4][strcspn(array[k][4], "\n")] = '\0';

        printf("5. 국적: ");
        fgets(array[k][5], 100, stdin);
        array[k][5][strcspn(array[k][5], "\n")] = '\0';

        printf("6. BMI: ");
        fgets(array[k][6], 100, stdin);
        array[k][6][strcspn(array[k][6], "\n")] = '\0';

        printf("7. 주 스킬: ");
        fgets(array[k][7], 100, stdin);
        array[k][7][strcspn(array[k][7], "\n")] = '\0';

        printf("8. 보조 스킬: ");
        fgets(array[k][8], 100, stdin);
        array[k][8][strcspn(array[k][8], "\n")] = '\0';

        printf("9. 한국어 등급(TOPIK): ");
        fgets(array[k][9], 100, stdin);
        array[k][9][strcspn(array[k][9], "\n")] = '\0';

        printf("10. MBTI: ");
        fgets(array[k][10], 100, stdin);
        array[k][10][strcspn(array[k][10], "\n")] = '\0';

        printf("11. 소개: ");
        fgets(array[k][11], 100, stdin);
        array[k][11][strcspn(array[k][11], "\n")] = '\0';
    }
}
