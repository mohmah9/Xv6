#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"

struct proc_info
{
  uint pid;
  int memsize;
};
int main(void)
{
  int rc = fork();
  if (rc == 0)
  {
    int *temp = malloc(sizeof(int) * 5000000);
    for (int i = 0; i < 5000000; i++)
    {
      *(temp+i) = 999999;
    }
    for (int i = 0; i < 10000000000; i++)
    {
      continue;
    }
  }
  else if (rc > 0)
  {
    int wc = fork();
    if (wc == 0)
    {
      int *temp2 = malloc(sizeof(int) * 900000);
      for (int i = 0; i < 100000; i++)
      {
        *(temp2+i) = 999999;
      }
      for (int i = 0; i < 10000000000; i++)
      {
        continue;
      }
    }
    else if (wc > 0)
    {
      sleep(50);
      struct proc_info *p = malloc(sizeof(struct proc_info) * 100);
      getprc(p);
      for (int i = 0; i < NPROC; i++)
      {
        if ((p + i)->pid==0){
          break;
        }
        printf(1, "id and memsize of the process is %d , %d KB \n", (p + i)->pid, ((p + i)->memsize/1000));
      }
    }
  }
  exit();
}