/****************
2021-05-03
c class review
pointer
*****************/
#include <stdio.h>

void swap(int *ptr1, int *ptr2){

  int temp = *ptr1;
  *ptr1= *ptr2;
  *ptr2=temp;

  return 0;
}

int main(){

  int num1=10;
  int num2=20;

  int *ptr1 = &num1;
  int *ptr2 = &num2;

//  포인트에서 이어진 변수를 연산함(증감만 가능)
  *ptr1 += 10;
  *ptr2 -= 10;

  printf("%d %d \n", num1, num2);

//각 변수의 주소값을 교환
  swap(&num1, &num2);
//변수를 출력
  printf("%d %d", num1,num2);

  return 0;

}
