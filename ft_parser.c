#include "push_swap.h"
#include <stdlib.h>

int ft_check_duplacates(int *yarbi_mankonch_m3awed, int lenght)
{
    int i,j;

    i = -1;
    while((j = ++i,i) < lenght)
        while(j++ < lenght)
            if(yarbi_mankonch_m3awed[i] == yarbi_mankonch_m3awed[j])
                return(0);
    return(1);
}

int ft_machi_atoi(char* src, int* dst){
    int j = 1;
    int i = 0;
    int neg = 0;
    *dst=0;
    if((src[i]=='-' && ++i) || src[i]=='+')
        if(i || i++)
            neg++;

    while(src[i])
        if(src[i] < '0' || src[i++] > '9')
            return(0);

    while(--i > -1 + neg && src[i]!='+')
        j*=((*dst += (src[i]-'0')*j),10);

    if(neg)
        *dst *= -neg;
    return (1);
}

t_list* init_stuck(int lenght)
{
    t_list* head;
    t_list* temp;
    int i = 0;
    head = (t_list *)malloc(sizeof(t_list));
    temp = head;
    temp->pos = 0;
    temp->value = 0;
    temp->total = lenght;
    while (i+1 < lenght)
    {
        temp->pos = 0;
        temp->value = 0;
        temp->total = lenght;
        temp->next = (t_list *)malloc(sizeof(t_list));
        temp = temp->next;
        i++;
    }
    temp->next = head;
    return(head);
}
void fill_stack(t_list* head, int* list,int lenght){
    int i = 0;
    int j = 0;
    while (i < lenght)
    {
        head->value = list[i];
        head->pos = 0;
        head->total = lenght;
        j=0;
        while (j < lenght)
        {
            if(list[i]>list[j])
            {
                head->pos++;
            }
            j++;
        }
        head = head->next;
        i++;
    }
}


t_list* ft_parser(char **s, int lenght)
{
    t_list *head = init_stuck(lenght);

    int* output = malloc(sizeof(int) * lenght);
    int i;
    i  = -1;
    int ok = 1;

    while(++i < lenght && ok)
        ok = ft_machi_atoi(s[i], &output[i]);
    
    if(!ok)
        return(0);
    ok = ft_check_duplacates(output, lenght);
    if(!ok)
        return(0);
    fill_stack(head, output, lenght);
    return head;
}
