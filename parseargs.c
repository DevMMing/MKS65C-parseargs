#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
  /*
  char * temp = strchr(line,' ');
  int count = 0;
  while(temp != 0){
    count++;
    temp = strchr(temp + 1,' ');
  }
  printf("%d\n",count);
  //char * args[count + 1];
  for(int i = 0;i < count + 1;i++){
    args[i] = strsep(&line, " ");
  }
  printf("%s\n",args[0]);
  printf("%s\n",args[1]);
  printf("%s\n",args[2]);
  char ** list;
  printf("%s\n",list[0]);
  printf("%s\n",list[1]);
  printf("%s\n",list[2]);
  return list;
  */
  int count = 0;
  char * temp = strchr(line,' ');
  while(temp != 0){
    count++;
    temp = strchr(temp + 1,' ');
  }
  char **args = (char**)malloc(count * sizeof(char*));
  for(int i = 0;i < count + 1;i++){
    args[i] = strsep(&line, " ");
  }
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
  //printf("%s\n",args[0]);
  //printf("%s\n",args[1]);
  //printf("%s\n",args[2]);
  execvp(args[0], args);
  return 0;
}
  
