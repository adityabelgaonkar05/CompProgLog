#include <stdio.h>
#include <string.h>
int main(){
  printf("Aditya Belgaonkar 16010123026\n");
  char str[100], substr[100];
  int i, j, k, len1, len2, found;
  printf("Enter the main string: ");
  scanf("%s", str);
  printf("Enter the substring: ");
  scanf("%s", substr);
  len1 = strlen(str);
  len2 = strlen(substr);
  for(i = 0; i <= len1 - len2; i++){
    found = 1;
    for(j = i, k = 0; k < len2; j++, k++){
      if(str[j] != substr[k]){
        found = 0;
        break;
      }
    }
  }
    if(found == 1){
    printf("Index: %d\n", i);
    }
    else{
      printf("Index: -1");
    }
}
