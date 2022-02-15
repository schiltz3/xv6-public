
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#define NULL 0

typedef enum {
  NOT_FOUND

}fileError;

typedef struct fileOption{
  fileError error;
  char *error_str;
  int fd;
}fileOption;

void getFile(fileOption* file, char *fileName, int len);

int main(int argc, char *argv[])
{

  fileOption file = {NOT_FOUND, NULL, 0};
  switch (argc){
  case 0:
    printf(1, "wis-grep: searchterm [file ...]\n");
    return 1;
    break;
  case 1:
    getFile(&file, argv[1], strlen(argv[1]));
    break;
    

  default:
    printf(1, "default");

  }

  return 0;
}

void getFile(fileOption* file, char *fileName, int len){
}