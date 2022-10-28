# include <stdio.h>
# include <stdlib.h>

int main(){


  int A,B;
  scanf("%d %d", &A, &B);
  // printf("pass?");
  char A_arr[4];
  char B_arr[4];
  
  // 정수 -> 문자열 변환
  sprintf(A_arr, "%d", A);
  sprintf(B_arr, "%d", B);

  // printf("pass?");
  
  char A_new_arr[4] = {0};
  char B_new_arr[4] = {0};
  
  // 거꾸로 문자열로 새로구성
  int j = 2;
  for(int i = 0; i < 3; i ++){
    A_new_arr[i] = A_arr[j];
    B_new_arr[i] = B_arr[j];
    --j;
  }

  // 거꾸로 문자열 정수로 재구성
  A = atoi(A_new_arr);
  B = atoi(B_new_arr);

  // 거꾸로 재구성 된 정수 비교 | 큰 수 출력
  if(A > B){
    printf("%d", A);
  }
  else{
    printf("%d", B);
  }
}