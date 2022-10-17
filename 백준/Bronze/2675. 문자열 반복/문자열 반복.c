#include <stdio.h>
#include <string.h>

int main (){
  
    int num_case;
    scanf("%d", &num_case);
  
    // NewLine 입력버퍼 제거
    // scanf("%*c");
    
    // 문자열 반복시작 - case 1
    for (int i = 1; i <= num_case; i++){

      int str_case;
      char str[20];
      scanf("%d %s", &str_case ,str);
      // scanf("%*c");
      
        
      // 문자열 반복 - case 2 (입력케이스에 따라 문자열 출력 - 문자열에서 null 시 반복종료 ㅎㅎ)
      for(int j = 1; j <= strlen(str); j++){
          for(int z = 1; z <= str_case; z++){
             printf("%c",str[j-1]);
          }
      }
      printf("\n"); 
    }
    
    
}