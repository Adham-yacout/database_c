#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"


int main()
{

    printf("              Welcome to Database system\n");
    printf("---------------------------------------------------------------------------\n");
    printmenu();
    int menu;
    int id,studyear,course_id[3],course_grade[3],i,j,y;
    // scanf("%c",&menu);
    int flag=0;
    while(flag==0)
    {

        scanf("%d",&menu);
        switch(menu)
        {

        case 0:
            flag=1;
            break;
        case 1 :


            if( counter==10)
            {

                printf("Database is already full\n");
                printf("---------------------------------------------------------------------------\n");
            }
            else
            {
                printf("enter student id:");
                scanf("%d",&id);
                int t=searcher(id);
                if(t==1)
                {
                    printf("id is already in database\n");
                }
                else
                {
                    printf("enter student year: ");
                    scanf("%d",&studyear);
                    printf("enter course 1 id:");
                    scanf("%d",&course_id[0]);
                    printf("enter course 1 grade:");
                    scanf("%d",&course_grade[0]);
                    printf("enter course 2 id:");
                    scanf("%d",&course_id[1]);
                    printf("enter course 2 grade:");
                    scanf("%d",&course_grade[1]);
                    printf("enter course 3 id:");
                    scanf("%d",&course_id[2]);
                    printf("enter course 3 grade:");
                    scanf("%d",&course_grade[2]);
                    AddEntry(id,studyear,course_id,course_grade);
                }
                printf("---------------------------------------------------------------------------\n");
            }
            printmenu();


            break;

        case 2:
            SDb_Full();
            printf("---------------------------------------------------------------------------\n");
            printmenu();

            break;
        case 3:
            SDB_GetUsedSize();
            printf("---------------------------------------------------------------------------\n");
            printmenu();
            break;
        case 4:
            printf("Enter id you want to delete:");
            scanf("%d",&id);
            Delete_Entry(id);
            printf("---------------------------------------------------------------------------\n");
            printmenu();
            break;
        case 5:
            printf("enter id you want to read:");
            scanf("%d",&id);
            Read_Entry(id);
            printf("---------------------------------------------------------------------------\n");
            printmenu();
            break;
        case 6:
            SDB_Getidlist(counter );
            printf("---------------------------------------------------------------------------\n");
            printmenu();
            break;
        case 7:
            SDB_isidexist(id);
            printf("---------------------------------------------------------------------------\n");
            printmenu();
            break;
        default:
            printf("Entry is not in the menu\n");
            printf("---------------------------------------------------------------------------\n");
            printmenu();
            break;


        }
    }




    return 0;

}

