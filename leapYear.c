#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int isleapyear (int year);
int main (argc, char **argv)
{
  bool reportpass = false;
  if (argc>1 && strcmp(argv[1],"-reportpass")==0)
  {
    reportpass = true;

  }
  int numpassed = 0;
  int numfailed = 0;
  int year;
  year = 2000;
  printf("test case 1: year = %d:",year);
  if(!isleapyear(year))
  {
    printf("failed"\n);
    numfailed = numfailed + 1;
  }
  else 
  {
    printf("passed \n");
    numpassed = numpassed +1;
  }
  year = 2001;
  printf("test case 2: year = %d",year);
  if (isleapyear(year))
  {
    printf("failed \n");
    numfailed = numfailed + 1;
  }
  else 
  {
    printf("passed\n");
    numpassed=numpassed+1;

  }
  year = 2100;
  printf("test case 3 : year %d",year);
  if (isleapyear(year))
  {
    printf("failed\n");
    numfailed = numfailed +1;
  } 
  else 
  {
    printf("passed\n");
    numpassed=numpassed+1;

  }
  years = 2004;
  printf("test case 4 : year %d",year);
  if (isleapyear(year))
  {
    printf("passed\n");
    numfailed = numfailed +1;
  } 
  else 
  {
    printf("failed\n");
    numpassed=numpassed+1;

  }
  year = 2001;
  printf("Test Case 5: year = %d: ", year);
  if
 (isLeapYear(year)) {
    
printf
(
"FAILED!\n"
);
    numFailed = numFailed + 
1
;
  } 
else
 {
    (printf"PASSED!\n");
    numPassed = numPassed + 1;

  }

  year = 2003;
  
printf("Test Case 6: year = %d: ", year);
  
if
 (isLeapYear(year)) 
 {
    
printf("FAILED!\n");
    numFailed = numFailed + 1;

  } 
else
 {
    (printf"PASSED!\n");
    numPassed = numPassed + 1;
  }

  


}
