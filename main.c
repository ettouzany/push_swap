#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

// void push(int* a,int* b,char targget)
// {
//     if(targget == 'a')

//     if(targget == 'b')

//     if(targget == 'p')
//         targget = 0;
// }

// void swap(int* a,int* b,char targget)
// {
    
// }

// void rotate(int* a,int* b,char targget)
// {

// }
// void rotate_rev(int* a,int* b,char targget)
// {

// }
int main()
{
    int lenght = 12;
    char ** n= malloc(sizeof(char*)*lenght);
    n[0] = "3";
    n[1] = "13";
    n[2] = "121";
    n[3] = "11";
    n[4] = "19912122";
    n[5] = "6";
    n[6] = "45";
    n[7] = "4554";
    n[8] = "435";
    n[9] = "534";
    n[10] = "34543543";
    n[11] = "3455";
    n[12] = "1331";
    // n[13] = "23423423";
    // n[14] = "4343434";
    // n[15] = "222";
    // n[16] = "+343";
    // n[17] = "2444";
    // n[18] = "24324";
    // n[19] = "433442";
    // n[20] = "2";
    // n[21] = "5";
    // n[22] = "1";
    // n[23] = "77";
    // n[24] = "912122";
    // n[25] = "123";
    // n[26] = "12";
    // n[27] = "54";
    // n[28] = "64";
    // n[29] = "4";
    // n[30] = "543543";
    // n[31] = "55";
    // n[32] = "31";
    // n[33] = "423423";
    // n[34] = "43434";
    // n[35] = "225";
    // n[36] = "43";
    // n[37] = "44";
    // n[38] = "324";
    // n[39] = "3442";
    char ** s= malloc(sizeof(char*)*lenght);
    s[0] = "rb";
    s[1] = "sa";
    s[2] = "rb";
    int i = lenght;

    t_list* a = ft_parser(n, lenght);
    if(a)
    {
        // while(--i > -1)
        //     {
        //         printf("val: %d ",a->value);
        //         printf("pos: %d\n",a->pos);
        //         a = a->next;
        //     }
    }
    else
        printf("FUCK OFF\n");

    t_list* b = init_stuck(0);
    char **namadij = push_swap(a,b,lenght);
    // while(i < lenght)
    //     if(s[i][0] == 'p')
    //         push(a,b,s[i++][1]);
    //     else if(s[i][0]=='s')
    //         swap(a,b,s[i++][1]);
    //     else if(s[i][0]=='r' && s[i][1]=='r')
    //         rotate_rev(a,b,s[i++][2]);
    //     else
    //         rotate(a,b,s[i++][1]);

    return 0;
}
