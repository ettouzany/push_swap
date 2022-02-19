


typedef struct s_list {
    struct s_list* next;
    int pos;
    int value;
    int total;
    int group;
    int div;
} t_list;

t_list* ft_parser(char **s, int lenght);
t_list* init_stuck(int lenght);
char** push_swap(t_list* a, t_list* b, int lenght);