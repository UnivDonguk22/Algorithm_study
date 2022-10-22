# include <stdio.h>
# include <string.h>

int main(){
    char word_string[1000002];
    int word_count = 0;

    // 공백문자 포함한 문자열 입력받기
    // C에서 공백문자 포함한 문자열 입력받고,
    // 길이재면, 입력받은 문자열 길이 + 1이 된다. - 원인은 모르겠음 ㅋㅋ
    fgets(word_string, 1000002, stdin);
    // scanf("%[^\n]s" , word_string);

    for(int i = 0; i < strlen(word_string); i ++){
      
        // 첫문자 예외처리 - C언어에서 문자는 ''로 구분한다 ㅎㅎ......
        if((i == 0 && word_string[i] != ' ')){
            word_count = word_count + 1;            
        }
        
        // 마지막 문자 예외처리
        else if((i == (strlen(word_string) -2) && word_string[i] == ' ')){
            word_count = word_count;
        }   
        
        // 일반적인 경우 단어갯수 셈
        else if(word_string[i] == ' '){
            
            word_count = word_count + 1;
        }

    }
  
    printf("%d", word_count);
  
    
    return 0;
}