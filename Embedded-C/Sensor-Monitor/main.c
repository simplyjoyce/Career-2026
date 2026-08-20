// The program should:
// 1.	Ask the user for a sensor value. 
// 2.	Store it in a variable. 
// 3.	Decide whether the value is: 
// o	LOW 
// o	NORMAL 
// o	HIGH 
// 4.	Print the status. 
// 5.	Repeat for several readings. 
// 6.	Keep track of something useful, such as: 
// o	number of readings 
// o	highest reading 
// o	lowest reading 
// o	average 
// For example:
// Enter sensor reading: 35
// Status: NORMAL

// Enter sensor reading: 82
// Status: HIGH

// Enter sensor reading: 12
// Status: LOW

// --- Summary ---
// Readings: 3
// Highest: 82
// Lowest: 12
// Average: 43.0



/*  1. First declare the variables for the array with row indefinite.
            Row- readingValue[] 
        2. For each reading give the status of the reading. When user says no more reading, give summary.
        3. Print no. of readings, highest, lowest and average
                no. of readings = no of rows
                highest = Initialize a variable maxVal with value arr[0].
                            Traverse through the whole array. During traversal:
                            If maxVal is less than the current value of array update the value of maxVal..
                            Else continue.
                            Exit the loop after whole traversal and Print response which denotes the maximum value in array.
                lowest = Initialize a variable minVal with value arr[0]
                            Traverse through the whole array. During traversal:
                            If minVal is greater than the current value of array update the value of minVal.
                            Else continue
                            Exit the loop after whole traversal and Print response which denotes the maximum value in array.
                average = total/ no of readings      
    */

#include <stdio.h>

int main(){
    int readingValue;
    int noOfReading = 0;
    int maxVal, minVal;
    float average;
    int total = 0;
    char choice = 'y';


    while(choice == 'y'){
        printf("Enter sensor reading: \n");
        scanf("%d", &readingValue);

            if (readingValue< 50){
                printf("LOW\n");
            }
            else if(readingValue >= 50 && readingValue <= 100){
                printf("NORMAL\n");
            }
            else{
                printf("HIGH\n");
            }

            if (noOfReading==0){
            maxVal= readingValue;
            minVal = readingValue;
        }

        noOfReading++;

        

            if(readingValue>maxVal){
                maxVal = readingValue;
            }

        
            if (readingValue<minVal)
            {
                minVal = readingValue;
            }


        total += readingValue;
        

        printf("Do you want to add another reading, y|n?\n");
        scanf(" %c", &choice);
        if (choice == 'n'){
            break;
        }
    }
    average = (float)total/ noOfReading;
        printf("------------Summary-----------\n");
        printf("No. of Reading: %d\n",noOfReading);
        printf("Highest Reading Value: %d\n", maxVal);
        printf("Lowest Reading Value: %d\n", minVal);
        printf("Average: %.2f\n", average);    
    return 0;    
}


 /*I declared two variables in the beginning, reading value and no of readings. 
 i initialized the no of readings to zero so that we can begin to count later on.
  i used while(no of reading) because I want it to keep goin on. 
  then i made it to ask the user for the reading value and collect it 
  and store it in a variable called reading value. i also made it determine if
   its low normal or high. after determinnig that the no of reading increases 
   by 1 to show that a reading value has been accepted and 'stored'. then i 
   declasred and defined maxvalue, minvalue and average. firstly i made maxvalue 
   to take the readingvalue initially. the reading value keeps being updated and 
   if it is higher than the max value then the maxvalue is updated. same logic was 
   used for min value. i initialized t*/

