#ifndef prototypes_H_
#define prototypes_H_
#define x 0
extern int counter;
typedef struct s1
{
    int student_id;
    int student_year;
    int course_1_id;
    int course_1_grade;
    int course_2_id;
    int course_2_grade;
    int course_3_id;
    int course_3_grade;
    struct s1 * next;
} node;

// static int counter=0;
 static node *Start=NULL;
void SDb_Full();
void SDB_GetUsedSize();
void AddEntry(int Stid,int Sty, int *id, int *grade);
void  Delete_Entry(int stdid);
void Read_Entry(int stdid);
void SDB_Getidlist(int*counter);
void SDB_isidexist(int student_id );
void printmenu();




#endif // prototypes_H_
