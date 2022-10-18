#included<stdio.h>
struct student{
	char name[50];
	char major[50];
	int age;
	double gpa;
};


int main()
{
	struct student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy( student1.name, "love");
	strcpy( student1.major, "business");
	
	struct student student2;
	student2.age = 22;
	student2.gpa = 3.2;
	strcpy(student2.name, "love");
	strcpy(student2.major, "business");
	
	printf("%f", student1.gpa);
	printf("%s", student1.name);
	return 0;
}
