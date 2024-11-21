/**BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH REGARDS
 * TO THIS ASSIGNMENT.
 *
 * Name: YIHONE CHU
 * */

#include <stdio.h>
#include<stdlib.h>
int get_days(int cMonth,int cDay,int cYear,int fDays,int fYear){
	int cTotalDay;
	int yearDif;
	int numLeapYears;
	int dayDif;
	//ADDS THE DAYS FOR THE GIVEN MONTH.
	switch(month){
		case month ==1:
			cTotalDay =0;	
		case month ==2:
			cTotalDay = 31;
		case month ==3:
			cTotalDay =59;
		case month ==4:
			cTotalDay = 90;
		case month ==5:
			cTotalDay = 120;
		case month ==6:
			cTotalDay = 151;
		case month ==7:
	i		cTotalDay = 181;
		case month ==8:
			cTotalDay =212;
		case month ==9:
			cTotalDay = 243;
		case month ==10:
			cTotalDay =273;
		case month ==11:
			cTotalDay = 304;
		case month == 12:
			cTotalDay = 334;
	}
	//Coutns the number of days given the month and adds it with the days of the month
	cTotalDay +=cDay;
	//Calculates the difference of years;
	yearDif = abs(cYear-fYear);
	//Calcuated the difference in days;
	dayDif = abs(cTotalDay-fDays);
	//Calculates the number of leap years
	numLeaps = yearDif/4;
 	
	return (yearDif*365) +dayDif + numLeapYears;
}
