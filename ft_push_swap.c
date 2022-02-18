#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int check_if_sorted(t_list* a,int lenght)
{
    int i = 0;
    while (i < lenght )
        if (a->pos != i++)
            return (0);
    return (1);
}



void push_inlist(t_list** one,t_list** two){
    int i = 0;
    t_list* temp = *two;
    t_list* one_last = *one;
        printf("```total1: %d \n",(temp)->total);

    while (i < (temp->total) - 1)
    {
        temp->total++;
        temp = temp->next;
        i++;
    }

    i= 0;
    while (i < ((*one)->total))
    {
        one_last->total -= 1;
        one_last = one_last->next;
        i++;
    }
    printf("*****last: %d \n",(one_last)->pos);

    one_last->total -= 1;
    one_last->next = (*one)->next;
    temp->total++;


    temp->next = *one;
    (*one)->next = *two;
    (*one)->total = (temp)->total; 
    *one = one_last->next;
    *two = temp->next;
    printf("```total2: %d \n",(temp)->total);
}

void push(t_list** a,t_list** b,char targget)
{
    //if(targget == 'a')

    if(targget == 'b')
        push_inlist(a,b);
    if(targget == 'a')
        push_inlist(b,a);
    if(targget == 'p')
        targget = 0;
        // int i=0;
        // t_list* temp = *a;
        //     printf("####------------\n");

        // while(i < temp->total)
        // {
        //     printf("val: %d ",temp->value);
        //     printf("pos: %d\n",temp->pos);
        //     temp = temp->next;
        //     i++;
        // }
        //     printf("#####------------\n");
}

void swap(t_list** to_swap)
{
    t_list* temp = (*to_swap)->next;
    t_list* last = (*to_swap)->next;
    while (last->next != *to_swap)
        last = last->next;
    (*to_swap)->next = (*to_swap)->next->next;
    temp->next = (*to_swap);
    last->next = temp;
    *to_swap = temp;
}

void rotate(t_list** to_rotate)
{
     *to_rotate = (*to_rotate)->next;
}

void rotate_rev(t_list** to_rotate)
{
    t_list* temp = (*to_rotate)->next;
    while (temp->next != *to_rotate)
        temp = temp->next;
    *to_rotate =  temp;
}

char** push_swap(t_list* a, t_list* b, int lenght)
{
    char** output;

    int ok = check_if_sorted(a, lenght);
    if(ok)
        return(NULL);
    int i = 0;
    int div = lenght/2;
    t_list* temp = a;
    // while(i++ < lenght)
    // {
    //     printf("val: %d ",temp->value);
    //     printf("pos: %d\n",temp->pos);
    //     temp = temp->next;
    // }
    
    i=0;
    int j;
    temp = a;
            printf("))------------\n");

        while(i < temp->total)
        {   
            printf("i is: %d | ",temp->total);
            printf("val: %d ",temp->value);
            printf("pos: %d\n",temp->pos);
            temp = temp->next;
            i++;
        }
            printf("))------------\n");

        i=0;
    while (i < lenght && lenght > 2)
    {
        while (i < lenght)
        {
            printf("--- steps: %d\n",i);
            if(a->pos<div)
            {
                //printf("i is : %d\n",i);
                push(&a, &b,'b');
            }
            else{
                printf("+++rotation on : %d\n",a->pos);
                temp = a;
                j=0;
                while(j < temp->total)
                {
                    if(temp->pos<div)
                        break;
                    temp = temp->next;
                    j++;
                }
                if(temp->total != j)
                {
                    rotate(&a);
                    printf("+++rotation to : %d\n",a->pos);
                }
                if(a->pos<div)
                {
                    push(&a, &b,'b');
                }
            }
            i++;
        }
        
        // i=0;
        // temp = a;
        //     printf("))------------\n");

        // while(i < temp->total)
        // {
        //     printf("val: %d ",temp->value);
        //     printf("pos: %d\n",temp->pos);
        //     temp = temp->next;
        //     i++;
        // }
        //     printf("))------------\n");

        i=0;
        lenght = a->total;
        div += a->total/2;
    }
    
    // while ()
    // {
    //     /* code */
    // }
    



    i=0;

    temp = a;
    while(i++ < temp->total)
    {
        printf("val: %d ",temp->value);
        printf("pos: %d ",temp->pos);
        printf("total: %d ",temp->total);
        printf("next: %p\n",temp->next);
        temp = temp->next;
    }
    i=0;
    printf("pos------------\n");
    temp = b;
    while(i++ < temp->total)
    {
        printf("val: %d ",temp->value);
        printf("pos: %d ",temp->pos);
        printf("total: %d ",temp->total);
        printf("next: %p\n",temp->next);
        temp = temp->next;
    }
    return output;
}