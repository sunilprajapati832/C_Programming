struct student
{
  int rollno;
  char name[20];
};
int main()
{
  struct student s1;
  printf("Enter rollno:");
  scanf("%d",&s1.rollno)'
  printf("\n Enter name:")
  scanf("%s",s1.name);
  printf("\n your rollno: %d", s1.rollno);
  printf("\n your name: %s", s1.name);
}

/*
Output: 
Enter rollno:110
Enter name:Sunil
your rollno:110 
your name:Sunil
*/
