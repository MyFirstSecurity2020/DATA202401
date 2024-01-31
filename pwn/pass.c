#include"stdio.h"
#include"stdlib.h"

int main(){
  setvbuf(stdout, 0, 2, 0);
  setvbuf(stdin, 0, 2, 0);
  
  int token = 1234;
  char key[16];

  printf("Billy left his key in the locked room.\n");
  printf("However, he forgot the token of the room.\n");
  printf("Do you know what's the key?");

  read(0, key, 40);

  if((int)token == 0xdeadbeef){
    printf("Door open. OwO\n");
    system("cat ./flag");
  }else{
    printf("Cannot open door. QwQ\n");
  }

  return 0;
}
