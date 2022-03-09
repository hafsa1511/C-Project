#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


void mainmenu();
void order();
void food();
void viewOrder();
void details();
void editOrder(float,char[]);

int main(){
    mainmenu();
    return 0;
}
int quantity;
float total;
int response;
char name[20];

void mainmenu(){
    system("cls");
    printf("======================================================================\n");
    printf("\t\t FOOD DELIVERY SERVICE\n");
    printf("\t1.GO TO THE ORDER PAGE\n\t2.EXIT\n\tENTER YOUR CHOICE\n");
    printf("=======================================================================\n");
    printf("\n\t>>");

    int choice;
    scanf("%d", &choice);
    if(choice==1){
        order();
    }

    else if(choice==2){
        system("cls");
        printf("=======================================================================\n");
        printf("\t\t\t\t\tTHANK YOU\n");
        printf("=======================================================================\n");
        exit(0);
    }
}

void order(){
    system("cls");
    printf("=======================================================================\n");
    printf("\tCHOOSE WHAT YOU WANT TO DO\n");
    printf("\t1.ORDER FOOD\n\t2.VIEW ORDER\n\t3.BACK TO THE MAIN MENU");
    printf("\tENTER YOUR CHOICE:\n");
    printf("=======================================================================\n");
    printf("\n\t>>");

    int choice;
    scanf("%d", &choice);

    if(choice==1){
        system("cls");
        food();
    }

    else if(choice==2){
        system("cls");
        viewOrder();
    }

    else if(choice==3){
        system("cls");
        mainmenu();
    }

    else{
        printf("\n\tINVALID INPUT\n\n");
        order();
    }
}

void food(){

    printf("=======================================================================\n");
    printf("\tWelcome to 14th Avenue *\n ");
    printf("Make your selection from the menu below:\n\n");
    printf("\t1. Lentil soup\t\tRs. 250\n");
    printf("\t2. Avocado toast with fried egg\t\tRs. 350\n");
    printf("\t3. Turkey Wrap\t\tRs. 400\n");
    printf("\t4. Cottage cheese with steamed broccoli\t\tRs. 279\n");
    printf("\t5. Chicken Fried Rice	\t\tRs. 300\n");
    printf("\t6. Lamb Chops\t\tRs. 400\n");
    printf("\t7. Barbecue\t\tRs. 450\n");
    printf("\t8. Lasagna\t\tRs. 380\n");
    printf("\t9. Mutton Biryani\t\tRs. 500\n");
    printf("\t10.Chicken Biryani\t\tRs. 480\n");
    printf("\t11.Peas Pulao\t\tRs. 415\n");
    printf("\t12.Blueberry Cheesecake\t\tRs. 280\n");
    printf("\t13.Mushroom Pizza\t\tRs. 295\n");
    printf("\t14.Cheese fries\t\tRs. 185\n");
    printf("\t15.Shawarma\t\tRs. 315\n");
    printf("\t16.Butter Chicken\t\tRs. 299\n");
    printf("\t17.Chicken Tikka\t\tRs. 280\n\n");
    printf("\t18.BACK TO THE MAIN MENU\n");
    printf("=======================================================================\n");

    printf("\n\nINPUT YOUR ORDER:");
    scanf("%d", &response);

    if (response==1){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) of Lentil Soup\n", quantity);
        total= (quantity *250);
        printf("\nYOUR TOTAL IS %2.f\n\n", total);
        details();
    }

    if (response==2){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) of Avocado toast with fried egg\n", quantity);
        total=(quantity*350);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

    }

    if (response==3){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) of Turkey wrap\n", quantity);
        total=(quantity*400);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

    }

    if (response==4){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) of Cottage cheese with steamed broccoli\n", quantity);
        total=quantity*279;
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

    }

    if (response==5){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Chicken Fried Rice\n", quantity);
        total=quantity*300;
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

    }

    if (response==6){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Lamb Chops\n", quantity);
        total= (quantity *400);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

    }

     if (response==7){
         printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
         printf("You have selected %d order(s) Barbecue\n", quantity);
        total=total+ (quantity *450);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==8){
            printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Lasagna\n", quantity);
        total=(quantity*380);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==9){
            printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Mutton Biryani\n", quantity);
        total=total+ (quantity *500);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==10){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Chicken Biryani\n", quantity);
        total=(quantity *480);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==11){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Blueberry Cheesecake\n", quantity);
        total=(quantity *280);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==12){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Peas Pulao\n", quantity);
        total= (quantity *415);
        printf("\n\tYOUR TOTAL IS %.2f\n\n", total);
        details();

        }


        if (response==13){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Mushroom Pizza\n", quantity);
        total= (quantity *295);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==14){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Cheese fries\n", quantity);
        total= (quantity *185);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==15){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s)Shawarma\n", quantity);
        total=total+ (quantity *315);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==16){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Butter Chicken\n", quantity);
        total= (quantity *299);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();

        }

        if (response==17){
        printf("QUANTITY OF SELECTED ORDER: ");
        scanf("%d", &quantity);
        printf("You have selected %d order(s) Chicken Tikka\n", quantity);
        total= (quantity *280);
        printf("\nYOUR TOTAL IS %.2f\n\n", total);
        details();
        }

        else if(response==18){
            system("cls");
            order();
        }
}

void details(){
    printf("\nINPUT CUSTOMER DETAILS: \n");
    printf("Enter Name: ");
    scanf("%s", &name);
    if (getchar())
    system("cls");

    editOrder(total, name);

    printf("=======================================================================\n");
    printf("\t\tYOUR ORDER DETAILS ARE: \n");
    printf("\t\tCUSTOMER NAME: %s\n\t\tYOUR ORDER TOTAL IS: %.2frs\n", name, total);
    printf("\t\tYOUR SELECTED ORDER IS : %d\n", response);
    printf("\t\tPress any key to go back to main menu.\n");
    printf("=======================================================================\n");
    if(getchar()){
    system("cls");
    mainmenu();
    }

}

void viewOrder(){
    system("cls");
    FILE *f;
    f = fopen("order.txt", "r");

    if (f==NULL){
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    else {do
        {
            char name = fgetc(f);

            if (feof(f))
                break ;

            printf("%c", name);
        }  while(1);
        getchar();
    }

    printf("\t\t*Press any key to go back*\n");
    if(getchar()){
    system("cls");
    mainmenu();
    }
}

void editOrder(float t, char fnm[20] ){
    system("cls");
    FILE *f;
    f = fopen("order.txt", "a");
    fprintf(f, "Customer Name: %s\nGrand Total: %.2frs\nSelected Order: %i\n\n\n", fnm, t, response);
    fclose(f);
}
