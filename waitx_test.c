#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(void)
{
    int wt;
    int rt;
    int pid;
    // int temp = 0;
    pid = fork();
    if(pid == 0){
        sleep(1);
        for (int i = 0; i < 1000; i++)
        {
            // temp ++;
            printf(1, "fuck");
        }
        
        printf(1, "done child \n");
        exit();
    }else if (pid > 0){
        waitx(&wt, &rt);
        // printf(1, "Unix V6 was released in the year %d\n", waitx(&wt, &rt));
        printf(1, "wt : %d , rt : %d \n" , wt , rt);
        exit();
    }   
}

// #include "types.h"
// #include "stat.h"
// #include "user.h"
// #include "fs.h"

// int main (int argc,char *argv[])
// {

//  int pid;
//  int status=0,a=3,b=4;	
//  pid = fork ();
//  if (pid == 0)
//    {	
//    exec(argv[1],argv);
//     printf(1, "exec %s failed\n", argv[1]);
//     }
//   else
//  {
//     status=waitx(&a,&b);
//  }  
//  printf(1, "Wait Time = %d\n Run Time = %d with Status %d \n",a,b,status); 
//  exit();
// }