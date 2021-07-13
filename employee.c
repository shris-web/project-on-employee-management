#include<stdio.h>
#define MAX 5
struct emp
{
    char name[30];
    int id;
    int yoe;
    int sal;
};
int main()
{
    struct emp arr_data[MAX];
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("Enter the details of employee %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",&arr_data[i].name);
        printf("Enter Id: ");
        scanf("%d",&arr_data[i].id);
        printf("Enter year of experience: ");
        scanf("%d",&arr_data[i].yoe);
        printf("Enter salary: ");
        scanf("%d",&arr_data[i].sal);
    }
    printf("\n");
    printf("Information of all the employees\n\n");
    for(i=0;i<MAX;i++)
    {
        printf("%s\t%d\t%d\t%d\n",arr_data[i].name,arr_data[i].id,arr_data[i].yoe,arr_data[i].sal);
    }
    return 0;
}
