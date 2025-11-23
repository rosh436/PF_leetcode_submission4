#include<Stdio.h>
#include<string.h>
int main(){
	struct Student {
		int age;
		char firstName[100];
		char lastName[100];
		int standard;
	};
	struct Student s;
	printf("Enter the age of the student: ");
	scanf("%d", &s.age);
	printf("Enter the first name of the student: ");
	scanf("%s", s.firstName);
	printf("Enter the last name of the student: ");
	scanf("%s", s.lastName);
	printf("Enter the standard of the student: ");
	scanf("%d", &s.standard);
	printf("%d ", s.age);
	printf("%s ", s.firstName);
	printf("%s ", s.lastName);
	printf("%d ", s.standard);	
}
