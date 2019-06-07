#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */

int main(int argc, char **argv)
{
  DIR *dir;
  struct dirent *dp;
  char * file_name;
  printf("There are %d command line argument(s):\n", argc);
  printf("I want to use this %s\n", argv[1]);


  // Open directory
  if (argv[1] == NULL) {
    printf("Beofre I do antthing\n");
    if ((dir = opendir(".")) == NULL) {
      perror("Can't open directory");
      exit(1);
    } else {
        dp = readdir(".");
        while (&dp != NULL) {
          printf("I am here");
        
        
      }
      closedir(dir);
    }
  }

  // Repeatly read and print entries
  // Close directory

  return 0;
}