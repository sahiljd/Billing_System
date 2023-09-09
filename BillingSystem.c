#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    system("color 2");

    char name[10];
    char phone[11];
    int customer_id;

    float Body_soap, Hair_cream, Hair_shampoo, Deo;

    float Sugar, Rice, Tea, Coffee, Wheat;

    float Pepsi, Mirinda, Coke, Sprite, Thumbs_Up;

    float total;

    system("cls");
    printf("---------------------------------------------------------------------------\n");
    printf("\t\t\tBILLING SYSTEM\n");
    printf("---------------------------------------------------------------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name: ");
    scanf("%s",name);
label:
    printf("Customer Phone_No: ");
    scanf("%s",phone);
    if (strlen(phone)!=10)

    {
        Beep(1000,500);
        printf("Re-Enter your Number Please:\n");
        goto label;
    }
    printf("Customer Id: ");
    scanf("%d", &customer_id);
    printf("---------------------------------------------------------------------------\n");

   
    printf("COSMETICS\n\n");
    printf("Body Soap (Rs 10) :");
    scanf("%f", &Body_soap);
    printf("Hair Cream (Rs 150) :");
    scanf("%f", &Hair_cream);
    printf("Shampoo (Rs 70) :");
    scanf("%f", &Hair_shampoo);
    printf("Body Deo (Rs 170) :");
    scanf("%f", &Deo);
   

    printf("---------------------------------------------------------------------------\n");
    printf("GROCERIES\n\n");
    printf("Sugar (Rs 50) :");
    scanf("%f", &Sugar);
    printf("Rice (Rs 70) :");
    scanf("%f", &Rice);
    printf("Wheat (Rs 50) :");
    scanf("%f", &Wheat);
    printf("Tea (Rs 500) :");
    scanf("%f", &Tea);
    printf("Coffee (Rs 700) :");
    scanf("%f", &Coffee);
   

    printf("---------------------------------------------------------------------------\n");

    printf("BEVERAGES\n\n");
    printf("Pepsi (Rs 70) :");
    scanf("%f", &Pepsi);
    printf("Coke (Rs 80) :");
    scanf("%f", &Coke);
    printf("Mirinda (Rs 70) :");
    scanf("%f", &Mirinda);
    printf("Sprite (Rs 75) :");
    scanf("%f", &Sprite);
    printf("Thumbs Up (Rs 80) :");
    scanf("%f", &Thumbs_Up);
   
    printf("---------------------------------------------------------------------------\n");

    

   printf("TOTAL COSMETICS COST\n\n");

    printf("ITEMS\t\t\t\tQUANTITY\t\t\t  PRICE\n");
    printf("Body Soap:                      %.2f                              %.2f\n", Body_soap, (Body_soap * 10));
    printf("Hair Cream:                     %.2f                              %.2f\n", Hair_cream, (Hair_cream * 150));
    printf("Shampoo:                        %.2f                              %.2f\n", Hair_shampoo, (Hair_shampoo * 70));
    printf("Body Deo:                       %.2f                              %.2f\n", Deo, (Deo * 170));

    float costotal = (Body_soap * 10) + (Hair_cream * 150) + (Hair_shampoo * 70) + (Deo * 170);
    printf("\n");
    printf("COSMETICS PRICE: %.2f\n", costotal);

    printf("---------------------------------------------------------------------------\n");

    printf("TOTAL GROCERIES COST\n\n");

    printf("ITEMS\t\t\t\tQUANTITY\t\t\t  PRICE\n");
    printf("Sugar:                          %.2f                              %.2f\n", Sugar, (Sugar * 50));
    printf("Rice:                           %.2f                              %.2f\n", Rice, (Rice * 70));
    printf("Wheat:                          %.2f                              %.2f\n", Wheat, (Wheat * 50));
    printf("Tea:                            %.2f                              %.2f\n", Tea, (Tea * 500));
    printf("Coffee:                         %.2f                              %.2f\n", Coffee, (Coffee * 700));

    float Groctotal = (Sugar * 50) + (Rice * 70) + (Wheat * 50) + (Tea * 500) + (Coffee * 700);
    printf("\n");
    printf("GROCERIES PRICE: %.2f\n", Groctotal);

    printf("---------------------------------------------------------------------------\n");

    printf("TOTAL BEVERAGES COST\n\n");

    printf("ITEMS\t\t\t\tQUANTITY\t\t\t  PRICE\n");
    printf("Pepsi:                          %.2f                              %.2f\n", Pepsi, (Pepsi * 70));
    printf("Coke:                           %.2f                              %.2f\n", Coke, (Coke * 80));
    printf("Mirinda:                        %.2f                              %.2f\n", Mirinda, (Mirinda * 70));
    printf("Sprite:                         %.2f                              %.2f\n", Sprite, (Sprite * 75));
    printf("Thumbs_Up:                      %.2f                              %.2f\n", Thumbs_Up, (Thumbs_Up * 80));

    float Bevtotal = (Pepsi * 70) + (Coke * 80) + (Mirinda * 70) + (Sprite * 75) + (Thumbs_Up * 80);
    printf("\n");
    printf("BEVERAGES PRICE: %.2f\n", Bevtotal);

    printf("---------------------------------------------------------------------------\n");
    printf("                          TOTAL COST:%.2f\n", costotal + Groctotal + Bevtotal);
    printf("---------------------------------------------------------------------------\n");

    printf("\n\n\n");

    
 
    char receipt;
    printf("DO YOU WANT A RECEIPT:(y\\n):");
    scanf(" %c",&receipt);

    if (receipt == 'y' || receipt == 'Y') {
    FILE *billFile = fopen("bill.txt", "w");
    
    if (billFile == NULL) {
        perror("Error opening file");
        return 1; // Exit with an error code
    }
    

    fprintf(billFile, "---------------------------------------------------------------------------\n");
    fprintf(billFile, "\t\t\tBILLING SYSTEM\n");
    fprintf(billFile, "---------------------------------------------------------------------------\n");
    fprintf(billFile, "Customer Details\n\n");
    fprintf(billFile,"Customer Name:%s\n", name);
    fprintf(billFile,"Customer Phone:%s\n",phone);
    fprintf(billFile,"Customer Id:%d\n",customer_id);

    fprintf(billFile, "---------------------------------------------------------------------------\n");
    fprintf(billFile,"Sugar:                          %.2f                              %.2f\n", Sugar, (Sugar * 50));
    fprintf(billFile,"Rice:                           %.2f                              %.2f\n", Rice, (Rice * 70));
    fprintf(billFile,"Wheat:                          %.2f                              %.2f\n", Wheat, (Wheat * 50));
    fprintf(billFile,"Tea:                            %.2f                              %.2f\n", Tea, (Tea * 500));
    fprintf(billFile,"Coffee:                         %.2f                              %.2f\n", Coffee, (Coffee * 700));
    fprintf(billFile,"GROCERIES PRICE: %.2f\n", Groctotal);
    
    fprintf(billFile, "---------------------------------------------------------------------------\n");
    fprintf(billFile,"Body Soap:                      %.2f                              %.2f\n", Body_soap, (Body_soap * 10));
    fprintf(billFile,"Hair Cream:                     %.2f                              %.2f\n", Hair_cream, (Hair_cream * 150));
    fprintf(billFile,"Shampoo:                        %.2f                              %.2f\n", Hair_shampoo, (Hair_shampoo * 70));
    fprintf(billFile,"Body Deo:                       %.2f                              %.2f\n", Deo, (Deo * 170));
    fprintf(billFile,"COSMETICS PRICE: %.2f\n", costotal);

    fprintf(billFile, "---------------------------------------------------------------------------\n");
    fprintf(billFile,"Pepsi:                          %.2f                              %.2f\n", Pepsi, (Pepsi * 70));
    fprintf(billFile,"Coke:                           %.2f                              %.2f\n", Coke, (Coke * 80));
    fprintf(billFile,"Mirinda:                        %.2f                              %.2f\n", Mirinda, (Mirinda * 70));
    fprintf(billFile,"Sprite:                         %.2f                              %.2f\n", Sprite, (Sprite * 75));
    fprintf(billFile,"Thumbs_Up:                      %.2f                              %.2f\n", Thumbs_Up, (Thumbs_Up * 80));
    fprintf(billFile,"BEVERAGES PRICE: %.2f\n", Bevtotal);


    fprintf(billFile, "---------------------------------------------------------------------------\n");
    fprintf(billFile,"Total Cost:%f\n",costotal + Groctotal + Bevtotal);

    fclose(billFile);
    printf("\n\n");
    printf("*******************************\n");
    printf("YOUR BILL IS DOWNLOADED\n");
    printf("*******************************\n");
    ShellExecute(NULL, "open", "bill.txt", "C:\\Users\\sahil\\Desktop\\Restaurent", NULL, SW_SHOWNORMAL);
   
}
else
{
    printf("*******************************\n");
    printf("THANK YOU FOR SHOPPING WITH US!!\n");
    printf("********************************\n");
}

return 0;
    }