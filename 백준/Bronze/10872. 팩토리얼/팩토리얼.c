# include <stdio.h>

int main(){
  int num;
  scanf("%d", &num);

  int total = 1;

  if(num == 0){
    printf("%d", 1);
  }
  else{
    for(int i = 1; i <= num; i ++){
      total = total * i;
    }
    printf("%d", total);
  }
    return 0;
}