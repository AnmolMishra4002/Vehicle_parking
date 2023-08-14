#include <stdio.h>
#include <math.h>
int main()
{
    int carCount = 0, carArrived, scooterCount = 0, scooterArrived, busCount = 0, busArrived, cycles = 0, choice, car[carCount][2], scooter[scooterCount][2], bus[busCount][2], car1;
Here:
    printf("-------------- VEHICLE PARKING -----------------\n");
    printf("1>> Arrival of vehicle\n");
    printf("2>> Total number of vehicles Parked\n");
    printf("3>> Total number of cars Parked\n");
    printf("4>> Total number of scooters/Bikes Parked\n");
    printf("5>> Total number of Buses Parked\n");
    printf("6>> Search Vehicle\n");
    printf("7>> Departure of Vehicle\n");
    printf("8>> Parking Details\n");
    printf("9>> Exit\n");
    printf("--------------------------------------------------\n\n");
    printf("Enter your choice here: ");
    scanf("%d", &choice);

    if (choice == 1)
    {

        printf("1>>Car     2>>Scooter     3>>Bus\n");
        printf("Choose vehicle:");
        scanf("%d", &car1);
        if (car1 == 1)
        {
            printf("Enter how many cars have arrived: ");
            scanf("%d", &carArrived);
            int c = 0; // To count number of departed empty space
            carCount = carCount + carArrived;
            for (int i = 0; i < carCount; i++)
            {
                if (car[i][1] == 0)
                {
                    car[i][0] = i + 1;
                    printf("Enter cars number at parking slot %d: ", car[i][0]);
                    scanf("%d", &car[i][1]);
                    c++;
                }
                else if (i >= carCount - carArrived && i < carCount - c)
                {
                    car[i][0] = i + 1;
                    printf("Enter xxxx number at parking slot %d: ", car[i][0]);
                    scanf("%d", &car[i][1]);
                }
            }

            goto Here;
        }
        else if (car1 == 2)
        {
            printf("Enter how many scooters/Bikes have arrived: ");
            scanf("%d", &scooterArrived);
            int s = 0; // To count number of departed empty space
            scooterCount = scooterCount + scooterArrived;
            for (int i = 0; i < scooterCount; i++)
            {
                if (scooter[i][1] == 0)
                {
                    scooter[i][0] = i + 1;
                    printf("Enter scooters/bikes number at parking slot %d: ", scooter[i][0]);
                    scanf("%d", &scooter[i][1]);
                    s++;
                }
                else if (i >= scooterCount - scooterArrived && i < scooterCount - s)
                {
                    scooter[i][0] = i + 1;
                    printf("Enter scooter/bikes number at parking slot %d: ", scooter[i][0]);
                    scanf("%d", &scooter[i][1]);
                }
            }
            goto Here;
        }
        else if (car1 == 3)
        {
            printf("Enter how many buses have arrived: ");
            scanf("%d", &busArrived);
            int b = 0; // To count number of departed empty space
            busCount = busCount + busArrived;
            for (int i = 0; i < busCount; i++)
            {
                if (bus[i][1] == 0)
                {
                    bus[i][0] = i + 1;
                    printf("Enter bus number at parking slot %d: ", bus[i][0]);
                    scanf("%d", &bus[i][1]);
                    b++;
                }
                else if (i >= busCount - busArrived && i < busCount - b)
                {
                    bus[i][0] = i + 1;
                    printf("Enter bus number at parking slot %d: ", bus[i][0]);
                    scanf("%d", &bus[i][1]);
                }
            }
            goto Here;
        }
        else
        {
            printf("Wrong number entered\n");
            goto Here;
        }
    }
    else if (choice == 2)
    {
        printf("Total number of vehicles parked: %d\n", carCount + busCount + scooterCount);
        goto Here;
    }
    else if (choice == 3)
    {
        printf("Total number of car parked: %d\n", carCount);
        goto Here;
    }
    else if (choice == 4)
    {
        printf("Total number of scooters/bikes parked: %d\n", scooterCount);
        goto Here;
    }
    else if (choice == 5)
    {
        printf("Total number of Buses parked: %d\n", busCount);
        goto Here;
    }
    else if (choice == 6)
    {
        int Vnum;
        printf("Enter Vehicle number you want to search: ");
        scanf("%d", &Vnum);
        for (int i = 0; i < 1000; i++)
        {
            if (car[i][1] == Vnum)
            {
                printf("The vehicle is a Car\nHaving car Count =%d\n\n", car[i][0]);
                goto Here;
            }
            else if (scooter[i][1] == Vnum)
            {
                printf("The vehicle is a Scooter/Bike\nHaving Scooter/Bike Count =%d\n\n", scooter[i][0]);
                goto Here;
            }
            else if (bus[i][1] == Vnum)
            {
                printf("The vehicle is a Bus\nHaving Bus Count =%d\n\n", bus[i][0]);
                goto Here;
            }
        }
        printf("SORRY:( \nThe vehicle is not parked here\n\n");
        goto Here;
    }
    else if (choice == 7)
    {
        int Vehicle, Vnumber;
        printf("Select which vehicle have departed:\n1>>Car\t2>>Scooter/Bike\t3>>Bus\n\nSelect:");
        scanf("%d", &Vehicle);
        printf("Enter number of the Vehicle: ");
        scanf("%d", &Vnumber);
        if (Vehicle == 1)
        {
            int p = 0;
            for (int i = 0; i < carCount; i++)
            {
                if (car[i][1] == Vnumber)
                {
                    printf("-----------------------------------------------\n");
                    printf("|                PARKING INVOICE              |\n");
                    printf("-----------------------------------------------\n");
                    printf("          >>>Vehicle type   :CAR              \n");
                    printf("          >>>Vehicle number :%d              \n ", car[i][1]);
                    printf("          >>>Total Amount   :Rs 60(GST involved)\n");
                    printf("          >>>THANK YOU<<<\n");
                    printf("-----------------------------------------------\n");
                    car[i][1] = 0;
                    p++;
                }
            }
            if (p == 0)
            {
                printf("There is no such vehicle with this vehicle number\n");
            }
            goto Here;
        }
        else if (Vehicle == 2)
        {
            int q = 0;
            for (int i = 0; i < scooterCount; i++)
            {
                if (scooter[i][1] == Vnumber)
                {
                    printf("-----------------------------------------------\n");
                    printf("|                PARKING INVOICE              |\n");
                    printf("-----------------------------------------------\n");
                    printf("          >>>Vehicle type   :Scooter/Bike              \n");
                    printf("          >>>Vehicle number :%d               \n", scooter[i][1]);
                    printf("          >>>Total Amount   :Rs 40(GST involved)\n");
                    printf("          >>>THANK YOU<<<\n");
                    printf("-----------------------------------------------\n");
                    scooter[i][1] = 0;
                    q++;
                }
            }
            if (q == 0)
            {
                printf("There is no such vehicle with this vehicle number\n");
            }
            goto Here;
        }
        else if (Vehicle == 3)
        {
            int r = 0;
            for (int i = 0; i < busCount; i++)
            {
                if (bus[i][1] == Vnumber)
                {
                    printf("-----------------------------------------------\n");
                    printf("|                PARKING INVOICE              |\n");
                    printf("-----------------------------------------------\n");
                    printf("         >>>Vehicle type   :BUS              \n");
                    printf("         >>>Vehicle number :%d               \n", bus[i][1]);
                    printf("         >>>Total Amount   :Rs 100(GST involved)\n");
                    printf("         >>>THANK YOU<<<\n");
                    printf("-----------------------------------------------\n");
                    bus[i][1] = 0;
                    r++;
                }
            }
            if (r == 0)
            {
                printf("There is no such vehicle with this vehicle number\n");
            }

            goto Here;
        }
    }
    else if (choice == 8)
    {
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("PARKING SLOT\t\tCARS No.\t\tSCOOTERS/BIKES No.\t\tBUSES No.\n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        for (int i = 0; i < 50; i++)
        {
            printf("%d\t\t\t", i + 1);
            if (car[i][1] == 0 || i >= carCount)
                printf("Empty\t\t\t");
            else
                printf("%d\t\t\t", car[i][1]);

            if (scooter[i][1] == 0 || i >= scooterCount)
                printf("Empty\t\t\t\t");
            else
                printf("%d\t\t\t\t", scooter[i][1]);

            if (bus[i][1] == 0 || i >= busCount)
                printf("  Empty\t\t\n");
            else
                printf("  %d\t\t\n", bus[i][1]);
        }
        goto Here;
    }
    else if (choice == 9)
    {
        return 0;
    }
    else
    {
        printf("Invalid choice!!\n");
        goto Here;
    }
    return 0;
} /*for (int i = carCount - carArrived; i < carCount; i++)
             {
                 car[i][0] = i + 1;
                 printf("Enter car number at count %d: ", car[i][0]);
                 scanf("%d", &car[i][1]);
             }*/