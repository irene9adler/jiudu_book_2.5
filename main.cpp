//¾Å¶È 2.5 c++ÔËËã·ûÖØÔØ
#include <stdio.h>
#include <algorithm>
#include <string.h>
#define M 1000
using namespace std;
struct student
{
    char name[100];
    int age;
    int grade;

    bool operator < (const student &b) const
    {
        if(grade != b.grade) return grade<b.grade;
    else
    {
        int tmp = strcmp(name,b.name);
        if(tmp!=0) return tmp<0;//a.name<b.name true
        else return age<b.age;
    }
    }
}stu[M];


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i=0;i<n;i++)
            scanf("%s %d %d",&stu[i].name,&stu[i].age,&stu[i].grade);

        sort(stu,stu+n);
        for(i=0;i<n;i++)
            {
                printf("%s %d %d",stu[i].name,stu[i].age,stu[i].grade);
                printf("\n");
            }
    }
    return 0;
}
