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
    int lenght = 20;
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
    n[13] = "23423423";
    n[14] = "4343434";
    n[15] = "222";
    n[16] = "+343";
    n[17] = "2444";
    n[18] = "24324";
    n[19] = "433442";
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
        printf("FUCK OFF");

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
