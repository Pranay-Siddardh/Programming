#include "essen.h"

int main(void){
	student stu[3] = {{"Pranay", 18, 11230, 9985100009},{"Vishu",18,12321,6574657897},{"Bhai",18,87821,9878987654}};
	for (int i=0;i<3;i++){
	printf("The details about student %d are: \nName:- %s.\nAge:- %d.\nRoll.No: %d.\nPhone: %ld.\n\n",i+1,stu[i].name,stu[i].age,stu[i].rollno,stu[i].phone);
	}
	return 0;
}

