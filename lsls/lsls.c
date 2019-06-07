#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <libgen.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * Main
 */

int main(int argc, char **argv)
{
  DIR *dir;
  struct dirent *dp;
  printf("There are %d command line argument(s):\n", argc);
  printf("I want to use this %s\n", argv[1]);

  // Open directory
  if (argv[1] == NULL) {
    argv[1] = ".";
  }

  if ((dir = opendir (argv[1])) == NULL) {
    perror ("Cannot open");
    exit (1);
  }

  while ((dp = readdir(dir)) != NULL) {
    struct stat st;
    stat(dp->d_name, &st);
    if (st.st_mode & S_IFDIR) {
      printf(" <DIR> ");
    } else {
      int size = st.st_size;
      printf("File Size == %d bytes\n", size);
    }

    printf("%s\n", dp->d_name);
  }
  closedir(dir);

  // Repeatly read and print entries
  // Close directory

  return 0;
}
