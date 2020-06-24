// 신입사원의 수는 5명으로 하며 구조체배열을 선언
// 구조체배열에는 키보드로부터 데이터를 입력한다.
// 엘리트사원의 조건은 학점이 4.0이상이고 영어점수가 900점 이상이다
// 구조체의 선언과 메인함수는 다음과 같이 작성

#include <stdio.h>

struct profile {
 char name[20]; // 이름을 저장할 멤버
 double grade; // 학점을 저장할 멤버
 int english; // 영어점수를 저장할 멤버
};
void input_data(struct profile *);
void elite(struct profile *);

int main()
{
 struct profile new_staff[5]; // 구조체배열 선언

 input_data(new_staff); // 입력하는 함수 호출
 elite(new_staff); // 엘리트를 출력하는 함수 호출
 return 0;
}

void input_data(struct profile *pf)
{
 int i;

 printf("이름, 학점, 영어점수를 입력하세요\n");
 for(i = 0; i < 5; i++) {
  scanf("%s%lf%d", (pf+i) -> name, &(pf+i) -> grade, &(pf+i) ->english);
 } printf("\n");
 
}

void elite(struct profile *pf)
{
 int i;

 for(i = 0; i < 5; i++) {
  if((pf+i)->grade >= 4.0 && (pf+i)->english >= 900) {
   printf("%s, %.1lf, %d\n", (pf+i)->name, (pf+i)->grade, (pf+i)->english);
  }
 }
}
