#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
// #include <assert.h>

int main(void)
{
    int pid;
    // int temp = 0;
    // int pre = set_priority(77);
    pid = fork();
    if (pid == 0)
    {   
        // int idd = -999;
        // printf(1, "child 1 \n");
        set_priority(33);
        // while(idd == -999 );
        int temp = 0;
        for (int i = 0; i < 9999; i++)
        {
            temp++;
        }

        // sleep(10);
        // printf(1, "child 1 done prior \n");
        exit();
    }
    else if (pid > 0)
    {
        int pid2 = fork();
        if (pid2 == 0)
        {
            // int idd = -999;
            // printf(1, "child 2 \n");
            set_priority(49);
            // while(idd == -999 );
            int temp = 0;
            for (int i = 0; i < 9999; i++)
            {
                temp++;
            }
            // printf(1, "child 2 done prior \n");
            exit();
        }
        else if (pid2 > 0)
        {
            int pid3 = fork();
            if (pid3 == 0)
            {
                // int idd = -999;
                // printf(1, "child 3 \n");
                set_priority(12);
                // while(idd == -999 );
                int temp = 0;
                for (int i = 0; i < 9999; i++)
                {
                    temp++;
                }
                // printf(1, "child 3 done prior \n");
                exit();
            }
            else if (pid3 > 0)
            {
                int pid4 = fork();
                if (pid4 == 0)
                {
                    // int idd = -999;
                    // printf(1, "child 4 \n");
                    set_priority(88);
                    // while(idd == -999 );
                    int temp = 0;
                    sleep(10);
                    for (int i = 0; i < 9999; i++)
                    {
                        temp++;
                    }
                    // printf(1, "child 4 done prior \n");
                    exit();
                }
                else if (pid4 > 0)
                {
                    int pid5 = fork();
                    if (pid5 == 0)
                    {
                        // int idd = -999;
                        // printf(1, "child 5 \n");
                        set_priority(56);
                        // while(idd == -999 );
                        int temp = 0;
                        for (int i = 0; i < 9999; i++)
                        {
                            temp++;
                        }
                        // printf(1, "child 5 done prior \n");
                        exit();
                    }
                    else if (pid5 > 0)
                    {
                        int pid6 = fork();
                        if (pid6 == 0)
                        {
                            // int idd = -999;
                            // printf(1, "child 6 \n");
                            set_priority(99);
                            // while(idd == -999 );
                            int temp = 0;
                            sleep(10);
                            for (int i = 0; i < 9999; i++)
                            {
                                temp++;
                            }
                            // printf(1, "child 6 done prior \n");
                            exit();
                        }
                        else if (pid6 > 0)
                        {
                            // sleep(3);
                            my_ps();
                            wait();
                            // my_ps();
                            // printf(1, "pre prior : %d \n", pre);
                            // int post = set_priority(90);
                            printf(1, "post prior \n");
                            exit();
                        }
                    }
                }
            }
        }
    }
}