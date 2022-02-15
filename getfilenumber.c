#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#define NUM_FILES 3

int
main(int argc, char *argv[])
{

  int fd;

  fd = open("TestFile", O_CREATE | O_RDWR);

  if(fd > 0){
    printf(1,"Created file\n");
  }
  else{
    printf(1,"Failed to create file\n");
  }


  int numberOfFiles = 0;

  numberOfFiles = getfilenumber();

  printf(1, "Number Of Open Files: %d\n", numberOfFiles);

  close(fd);

  return 0;
}