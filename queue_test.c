#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(void)
{
    int pid;
    int temp = 0;
    pid = fork();
    if (pid == 0)
    {
        sleep(1);
        nice();
        for (int i = 0; i < 1000; i++)
        {
            temp++;
        }
        printf(1, "done child one \n");
        exit();
    }
    else if (pid > 0)
    {
        int pid2 = fork();
        if (pid2 == 0)
        {
            for (int i = 0; i < 1000; i++)
            {
                temp++;
            }
            printf(1, "done child two \n");
            exit();
        }
        else if (pid2 > 0)
        {
            int pid3 = fork();
            if (pid3 == 0)
            {
                for (int i = 0; i < 1000; i++)
                {
                    temp++;
                }
                printf(1, "done child two \n");
                exit();
            }
            else if (pid3 > 0)
            {

                int a;
                my_ps();
                printf(1, "ps %d \n");
                a = nice();
                my_ps();
                printf(1, "ps %d \n", a);
                wait();
                a = nice();
                my_ps();
                printf(1, "ps %d \n", a);
                a = nice();
                wait();
                my_ps();
                wait();
                exit();
            }
        }
    }
}