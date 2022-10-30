

# include <stdio.h>
# include <string.h>
int main(){

  char word[100];
  scanf("%s", word);

  // a ~ z | 97 ~ 122
  for(int i = 97; i < 123; i ++){
    for(int j = 0; j < strlen(word); j ++) {
      if(word[j] == i){
        printf("%d ", j);
        break;
      }
      else if(j == strlen(word) -1){
        printf("%d ", -1);
      }
    }
  }
}