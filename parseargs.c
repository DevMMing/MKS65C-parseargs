#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
  char * temp = line;
  char ** args = &temp;
  while(line){
    printf("%s\n", line);
    printf("%s\n", args[0]);
    printf("%s\n", args[1]);
    strsep(&line, " ");
  }
  args = &temp;
  return args;
}

int main(){
  /*
  char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  printf("%s\n",line);
  */
  
  char line[] = "ls -a -l";
  char ** args = parse_args(line);
  printf("%s\n",args[0]);
  printf("%s\n",args[1]);
  printf("%s\n",args[2]);
  //execvp(args[0], args);
  return 0;
}
  
