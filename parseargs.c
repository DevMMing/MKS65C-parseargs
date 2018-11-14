#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
  char ** args = &line;
  printf("[%s]\n", strsep( &line, " " ));
  //strsep(&line, " ");
  //while(strsep(&line, " ") != 0);
  return args;
}

int main(){
  /*
  char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);*/
  char ** args = parse_args("ls -a -l");
  printf("%s\n",args[0]);
  printf("%s\n",args[1]);
  printf("%s\n",args[2]);
  //execvp(args[0], args);
  return 0;
}
  
