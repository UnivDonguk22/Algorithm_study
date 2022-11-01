# include <stdio.h>

int main(){
  int a, b, c;

  while(1){
    scanf("%d %d %d", &a, &b, &c);
    // 직각삼각형 판정 프로그램 실행예외처리
    if(a == 0 || b == 0 || c == 0){
      break;
    }
    
    if((a*a + b*b) == (c*c) || (b*b + c*c) == (a*a) || (c*c + a*a) == (b*b)){
      printf("right\n");
    }
    else{
      printf("wrong\n");
    }
  }

  return 0;
}