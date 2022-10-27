# include <stdio.h>

int main(){
  int A,B,C;
  scanf("%d", &A);
  scanf("%*c");
  scanf("%d", &B);
  scanf("%*c");
  scanf("%d", &C);
  scanf("%*c");
  
  int total;
  total = A*B*C;

  
  // 연산된 total 자릿수 계산
  int count = 0;
    while(total != 0)
  {
      total = total/10;
      ++count;
  }

  // total 변수 초기화 - while을 거쳤기에 ㅎㅎ
  total = A*B*C;
  // 디버그 코드
  // printf("%d", count);

  // total 자릿수 만큼 문자열 num 배열 생성
  char num[count];

  // total 정수 값을 문자열로 변환
  sprintf(num, "%d", total);
  // itoa(total, num, 10);

  // 디버그 코드
  // printf("%s", num);
  
  // 연산된 결과의 0 ~ 9 숫자의 빈도수 세기
  int number_count[10] = {0};
  for(int i = 0; i < count; i ++){
    // 0까지 포함되게에 그대로 index 지정해두됨.
    int index = num[i] - 48;
    number_count[index] = number_count[index] + 1;
  }

  // 순서대로 연산된 정수의 0 ~ 9 빈도수 출력
  for(int i = 0; i < 10; i ++){
    printf("%d\n", number_count[i]);
  }

  return 0;
}