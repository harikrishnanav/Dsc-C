//Harikrishnan A V
//International school of photonics
#include <stdio.h>

struct marks
{
    int subject[3];
    int total;
};

int main()
{
    struct marks student[3];
    int i,j,n,sub_total[3]={0};
    
      for(i=0;i<3;i++)
    {
        student[i].total=0;
        printf("\nEnter marks for Student %d\n",i+1);

        for(j=0;j<3;j++)
        {
            scanf("%d",&student[i].subject[j]);
            student[i].total+=student[i].subject[j];
            sub_total[j]+=student[i].subject[j];
        }
    }

    printf("\nTotal marks of each student\n");
    for(i=0;i<3;i++)
        printf("Student %d = %d\n",i+1,student[i].total);

    printf("\nTotal marks of each subject\n");
    for(j=0;j<3;j++)
        printf("Subject %d = %d\n",j+1,sub_total[j]);

    return 0;
}