/*
Author: mutinda Patrick
Reg no:D33-0197-2022 
Version 1
Date:2/3/2025
*/
  #include <stdio.h>

  int main() {
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    // prompt the user to enter bookID, dueDate, returnDate, daysOverdue, fineAmount and fineRate;
    printf("Enter the bookID,dueDate, returnDate: \n");
    scanf("%d%d%d", &bookID,&dueDate,&returnDate);

    // Program to get the days overdue;
    daysOverdue = returnDate - dueDate;

    // Determining the fine amount based on overdue days;
    if (daysOverdue <= 0) {
      fineRate = 0;
      fineAmount = 0;
    }
    else if (daysOverdue > 0 && daysOverdue <= 7) {
      fineRate = 20;
      fineAmount = daysOverdue * fineRate;
    }
    else if (daysOverdue >= 8 && daysOverdue <= 14) {
      fineRate = 50;
      fineAmount = daysOverdue * fineRate;
    }
    else {
      fineRate = 100;
      fineAmount = daysOverdue * fineRate;
    }

    // Display results 
    printf("The bookID is: %d\n", bookID);
    printf("The dueDate is: %d\n", dueDate);
    printf("The daysOverdue are: %d\n", daysOverdue);
    printf("The fineRate is Ksh %d per day\n", fineRate);
    printf("The fineAmount is Ksh %d\n", fineAmount);

    return 0; // Execution successful
}    