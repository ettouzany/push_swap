#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int check_if_sorted(t_list* a)
{
    int i = 0;
    while (i < a->total )
        if (a->pos != i++)
            return (0);
    return (1);
}



void push_inlist(t_list** one,t_list** two){
    int i = 0;
    t_list* temp = *two;
    t_list* one_last = *one;

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

    one_last->total -= 1;
    one_last->next = (*one)->next;
    temp->total++;


    temp->next = *one;
    (*one)->next = *two;
    (*one)->total = (temp)->total; 
    *one = one_last->next;
    *two = temp->next;
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

    int ok = check_if_sorted(a);
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

    char a_or_b = 'b';
    i=1;
    while (1)
    {
        while (i < lenght)
        {
            if(a->pos < div)
            {
                printf("--- move on : %d :: %d\n",a->pos, a->value);
                a->group = lenght;
                push(&a, &b, a_or_b);
            }
            else{
                printf("+++rotation on : %d :: %d\n",a->pos, a->value);
                temp = a;
                j=0;
                while(j < temp->total)
                {
                    if(temp->pos < div)
                        break;
                    temp = temp->next;
                    j++;
                }
                if(temp->total != j)
                {
                    rotate(&a);
                    printf("+++rotation to : %d :: %d\n",a->pos, a->value);
                }
                if(a->pos<div)
{                        printf("--- move on : %d :: %d\n",a->pos, a->value);

                    push(&a, &b, a_or_b);
}            }
            i++;
        }
        i=0;
        if(check_if_sorted(a) || a->total == 2)
        {
            if(!check_if_sorted(a))
            {
                rotate(&a);
                push(&a, &b, 'a');
            }
            else
                push(&a, &b, 'a');

            if(b->total != 0)
            {
                a_or_b = 'a';
            } else
            {
                break;
            }
        }
        else
        {
            lenght = a->total;
            div += a->total/2;
        }
        
        printf("))))))) : %d\n",div);
    }


    // i=0;
    // lenght = b->total;
    // div -= a->total/1.5;
    // while (i < lenght && lenght > 2)
    // {
    //     printf("\t\t\t\t\t%d\n", div);
    //     while (i < lenght)
    //     {
    //         if(b->pos > div)
    //         {
    //             printf("--- move on: %d\n", b->pos);
    //             push(&a, &b,'a');
    //         }
    //         else{
    //             printf("+++rotation on : %d\n",a->pos);
    //             temp = b;
    //             j=0;
    //             while(j < temp->total)
    //             {
    //                 if(temp->pos > div)
    //                     break;
    //                 temp = temp->next;
    //                 j++;
    //             }
    //             if(temp->total != j)
    //             {
    //                 rotate(&b);
    //                 printf("+++rotation to : %d\n",b->pos);
    //             }
    //             if(a->pos<div)
    //             {
    //                 push(&a, &b,'a');
    //             }
    //         }
    //         i++;
    //     }

    //     i=0;
    //     lenght = b->total;
    //     printf("########@#@total  b : %d\n",b->total);
    //     div = (b->total/1.5);
    // }
    // if(!check_if_sorted(a))
    // {
    //     rotate(&a);
    //     push(&a, &b,'a');
    // }


 
    i=0;

    temp = a;
    while(i++ < temp->total)
    {
        printf("val: %000d\t",temp->value);
        printf("pos: %000d\t",temp->pos);
        printf("group: %000d\t",temp->group);
        printf("total: %000d\t",temp->total);
        printf("next: %p\n",temp->next);
        temp = temp->next;
    }
    i=0;
    printf("pos------------\n");
    temp = b;
    while(i++ < temp->total)
    {
        printf("val: %d\t",temp->value);
        printf("pos: %d\t",temp->pos);
                printf("group: %000d\t",temp->group);

        printf("total: %d\t",temp->total);
        printf("next: %p\t",temp->next);
        printf("next-pos: %d\n",temp->next->pos);
        temp = temp->next;
    }
    return output;
}