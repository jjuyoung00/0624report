// ���Ի���� ���� 5������ �ϸ� ����ü�迭�� ����
// ����ü�迭���� Ű����κ��� �����͸� �Է��Ѵ�.
// ����Ʈ����� ������ ������ 4.0�̻��̰� ���������� 900�� �̻��̴�
// ����ü�� ����� �����Լ��� ������ ���� �ۼ�

#include <stdio.h>

struct profile {
 char name[20]; // �̸��� ������ ���
 double grade; // ������ ������ ���
 int english; // ���������� ������ ���
};
void input_data(struct profile *);
void elite(struct profile *);

int main()
{
 struct profile new_staff[5]; // ����ü�迭 ����

 input_data(new_staff); // �Է��ϴ� �Լ� ȣ��
 elite(new_staff); // ����Ʈ�� ����ϴ� �Լ� ȣ��
 return 0;
}

void input_data(struct profile *pf)
{
 int i;

 printf("�̸�, ����, ���������� �Է��ϼ���\n");
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
