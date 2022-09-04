#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"

//Check if full function
int counter=0;
void SDb_Full()
{
    if(counter==10)
    {
        printf("database is full\n");

    }
    else
    {
        printf("database is not full\n");


    }
}
//Get size function
void SDB_GetUsedSize()
{
    printf("number of entries is: %d\n",counter);

}
//Add function
void AddEntry(int Stid,int Sty, int *id, int *grade)
{

    node *list=Start;
    node *newnode=malloc(sizeof(node));
    newnode->student_id=Stid;
    newnode->student_year=Sty;
    newnode->course_1_id=id[0];
    newnode->course_1_grade=grade[0];
    newnode->course_2_id=id[1];
    newnode->course_2_grade=grade[1];
    newnode->course_3_id=id[2];
    newnode->course_3_grade=grade[2];
    newnode->next=NULL;
    node*temp;
    if(counter==0)
    {
        Start=newnode;
        counter++;
        printf("Added succesfully\n");
        return;
    }
    while(list!=NULL) //iterating until reaching the required place to create a new node
    {
        temp=list;
        list=list->next;
    }


    temp->next=newnode;

    counter++;
    printf("Added succesfully\n");

}
//Delete function
void  Delete_Entry(int stdid)
{
    node *List=Start;
    if(counter==0)

    {

        printf(" Id not found DataBase is Empty\n ");
        printf("---------------------------------------------------------------------------\n");
        return ;
    }
    node *temp=List;
    node *prev=NULL;
    while(temp!=NULL)
    {

        if(temp->course_1_id==stdid)
        {

            if(counter==1)
            {
                Start=NULL;
                counter--;
                printf(" Id :%d is deleted and DataBase is Empty\n",stdid);
                printf("---------------------------------------------------------------------------\n");
                return ;

            }
            if(prev==NULL)
            {
                Start=temp->next;
                counter--;
                printf(" Id :-%d is deleted \n",stdid);
                printf("---------------------------------------------------------------------------\n");
                return ;
            }
            prev->next=temp->next;
            counter--;
            printf(" Id :-%d is deleted \n",stdid);
            return ;
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
    }

    printf("ID is not found\n");
    printf("---------------------------------------------------------------------------\n");

}
//Read entry function
void Read_Entry(int stdid)
{

    if(counter==0)
    {
        printf("DataBase is Empty\n");
        return;

    }
    node *List=Start;
    printf("%d",List->student_id);
    while(List!=NULL)
    {
        printf("hi");

        if(List->student_id==stdid)
        {
            printf("id is found and read\n");
            printf("%d\n",List->student_year);
            printf("courses ids are:\n");
            printf("%d\n",List->course_1_id);
            printf("%d\n",List->course_2_id);
            printf("%d\n",List->course_3_id);
            printf("courses grades are:\n");
            printf("%d\n",List->course_1_grade);
            printf("%d\n",List->course_2_grade);
            printf("%d\n",List->course_3_grade);


        }
        else
        {
            List=List->next;
        }



    }

    printf("id is not found\n");



}
//Get Id list
void SDB_Getidlist(int*counter)
{
    node *temp=Start;
    node *list=Start;
    while(temp!=NULL)
    {
        printf("%d\n",temp->student_id);
        temp=temp->next;
    }


}
//Check if ID list exist
void SDB_isidexist(int student_id )
{
    node *list=Start;
    if(counter==0)
    {
        printf("DataBase is Empty\n ");
        printf("---------------------------------------------------------------------------\n");
        return ;
    }
    int stdid;
    printf("Enter the id you want to check ");
    scanf("%d",&stdid);

    while(student_id!=NULL)
    {
        if(list->student_id==stdid)
        {

            printf("id exists\n");
            break;
            //return 1;
        }
        else
            printf("id does not exist\n");
            break;
       // return 0;

    }
}
//printing the user interface menu
void printmenu()
{
    printf("1\)Add a new entry\n");
    printf("2\)check if database is full\n");
    printf("3\)check database number of entries\n");
    printf("4\)delete an entry\n");
    printf("5\)read entry\n");
    printf("6\)get id list\n");
    printf("7\check if id exist\n");
    printf("0\)exit\n");
    printf("---------------------------------------------------------------------------\n");
    printf("Enter the number:");

}
//search function
int searcher(int id)
{
    node *list=Start;
    while (list!=NULL)
    {
        if (list->student_id==id)
        {
            return 1;
        }
        else
        {
            list=list->next;
        }
    }
    return 0;
}
