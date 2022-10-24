# include <stdio.h>
# include <string.h>


int main(){
  char input_string[1000002];
  scanf("%s", input_string);

  // 아스키코드 대문자 : 65 ~ 90, 소문자 : 97 ~ 122
  // [0 ~ 25 배열 제작 | 길이가 26인 배열]
  int ASCII_arr[26] = {0};

  int len = strlen(input_string);
  // ASCII_arr 생성 - 입력한 단어의 알파벳의 빈도수 배열생성
  for(int i = 0; i < len; i ++){
    if(input_string[i] >= 'a' && input_string[i] <= 'z'){
      ASCII_arr[input_string[i] - 97] = ASCII_arr[input_string[i] - 97] + 1;
      }
    else{
      ASCII_arr[input_string[i] - 65] = ASCII_arr[input_string[i] - 65] + 1;
    }
  }

  // Test Code
  // for(int i = 0; i <= 25; i++){
  //   printf("%d", ASCII_arr[i]);
  // }

  // ASCII_arr 최댓값 뽑기
  int maxIdx = 0;
  for(int i = 0; i <= 25; i ++){
    for(int j = 0; j <= 25; j ++){
      if(ASCII_arr[i] < ASCII_arr[j]){
        break;
      }
      else if(j == 25){
        maxIdx = i;
        // printf("%d\n", i);
      }
    }
  }

  // 최댓값 유효성 검증 - 최댓값이 여러 개인지 검사
  int maxCount = 0;
  for(int i = 0; i <= 25; i ++){
    if(ASCII_arr[i] == ASCII_arr[maxIdx]){
      maxCount = maxCount + 1;
    }
  }

  // 예외출력
  if(maxCount == 1){
    printf("%c", maxIdx + 65);
  }
  else{
    printf("%c", '?');
  }
  
}
