#include<stdio.h>
#include<string.h>
int main()
{
	char name[25],course[50];
	
	printf("Enter your name : ");
	gets(name);
	printf("\nEnter course name : ");
	gets(course);
	
	int max_count_n=0,max_count_c=0;
	char max_char_n,max_char_course;
	
	for (int i=0;i<strlen(name);i++){
		 int count_n=0;
		if (name[i]==' '||name[i]=='\0')
		continue;
		for (int j=0;j<=i;j++){
			if (name[i]==name[j]){
				count_n++;
			}
		}
		if (count_n> max_count_n){
			 max_count_n=count_n;
			max_char_n=name[i];
		}
	}
	
		for (int i=0;i<strlen(course);i++){
		 int count_c=0;
		if(course[i]==' '||course[i]=='\0')
		continue;
		for (int j=0;j<=i;j++){
			if (course[i]==course[j]){
				count_c++;
			}
		}
		if (count_c>max_count_c){
			max_count_c=count_c;
			max_char_course=course[i];
		}
	}	
	printf("\n Most repeated character in your name is '%c' (%d times)\n\n Most repeated character in the course is '%c' (%d times)",max_char_n,max_count_n,max_char_course,max_count_c);
	 
	return 0;
}