//2(b) Write a C program for search a particular flight on a given date in a given list of flights.
// Enter the flight name, flight no, date of departure.
// Search the particular flight name and flight no on the given date using binary searching technique.
#include<stdio.h>
#include<string.h>
int binary_search(char flightName[5][50], char nos[5][50], char data[5][50], char searchName[5][50], char searchNos[5][50], char dateSearch[5][50], int n);
int binary_search(char flightName[5][50], char nos[5][50], char data[5][50], char searchName[5][50], char searchNos[5][50], char dateSearch[5][50], int n)
{
    int low = 0, high = n - 1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if((strcmp(flightName[mid],searchName)==0)&& strcmp((nos[mid],searchNos)==0) && strcmp((data[mid],dateSearch)==0) )
        {
            printf("Flight record found\n");
            for(int i=0;i<3;i++)
            {
                printf("Flight Name : %s\n", flightName[mid]);
                printf("Flight Number : %s\n", nos[mid]);
                printf("Flight Date of departure : %s\n", data[mid]);
                return 1;
            }
        }
        else if((strcmp(flightName[mid],searchName)<0)|| strcmp((nos[mid],searchNos)<0) || strcmp((data[mid],dateSearch)<0)){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }

    }
    printf("Flight Not found \n");
    return 0;
}
int main()
{
    char flightName[5][50] = {"India Airways", "Jio Air", "Air India"};
    char nos[5][50] = {"1", "2", "3"};
    char data[50][50] = {"24/11/2024", "11/11/2024", "20/11/2024"};

    char searchName[50] = "Jio Air";
    char searchNos[50] = "2";
    char dateSearch[50] = "11/11/2024";

    binary_search(flightName, nos, data, searchName, searchNos, dateSearch, 3);
    return 0;
}
