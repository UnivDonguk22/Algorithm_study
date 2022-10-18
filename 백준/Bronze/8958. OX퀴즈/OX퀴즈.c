#include <stdio.h>
#include <string.h>

int main(){
    int test_num;
    scanf("%d", &test_num);
    
    for(int i = 1; i <= test_num; i ++){
        char ox[80];
        scanf("%s", ox);
      
        // 디버깅 코드 ㅎㅎ
        // int test = strlen(ox);
        // printf("%d", test);
      
        int total = 0;
        int process_score = 0;
        // OX 문자열 길이 만큼 OX퀴즈 점수계산
        for(int j = 0; j < strlen(ox); j ++){
            if(ox[j] == 'O'){
                for(int z = 0; z <= j; z ++){
                    if(ox[z] == 'O'){
                        process_score = process_score + 1;
                    }
                    else{
                      process_score = 0;
                    }
                }
                total = total + process_score;
                
                // 다음 실행을 위해 process_score 0으로 초기화
                process_score = 0;
            }
          }
        printf("%d\n" , total);
    }
  return 0;
}