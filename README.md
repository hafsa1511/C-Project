# C-Project
Mini C programming project on food ordering service.
#include<stdio.h>

int  printMenu()
{



int response;

printf("                                     * Welcome to 14th Avenue *\n ");

printf("Make your selection from the menu below:\n\n");
printf("	 1. Lentil soup			                    Rs. 250\n");
printf("	 2. Avocado toast with fried egg		    Rs. 350\n");
printf("	 3. Turkey Wrap				            Rs. 400\n");
printf("	 4. Cottage cheese with steamed broccoli            Rs. 279\n");
printf("	 5. Chicken Fried Rice				    Rs. 300\n");
printf("	 6. Lamb Chops		                            Rs. 400\n");
printf("	 7. Barbecue                                        Rs. 450\n");
printf("	 8. Lasagna 		                            Rs. 380\n");
printf("	 9. Mutton Biryani		                    Rs. 500\n");
printf("	 10.Chicken Biryani		                    Rs. 480\n");
printf("	 11.Peas Pullao 		                    Rs. 415\n");
printf("	 12.Blueberry Cheesecake 		            Rs. 280\n");
printf("	 13.Mushroom Pizza 		                    Rs. 295\n");
printf("	 14.Cheese fries 		                    Rs. 185\n");
printf("	 15.Shawarma 		                            Rs. 315\n");
printf("	 16.Butter Chicken 		                    Rs. 299\n");
printf("	 17.Chicken Tikka			            Rs. 280\n\n");

printf(" *\n\n");
printf("Select 1 to 17 ---> \n\n");
scanf( "%d", &response);
return response;
}

int main()

{
  int s, choice;
  float p, x;
  int response;


  response = printMenu();

  printf("How many orders of item number %d would you like?\n", response);
  scanf("%d", &s);
  printf("Do you want to confirm your order? Press 1 for yes and 0 for no:");
  scanf("%d", &choice);
  if(choice==1){

  switch (response)
{
   case 1:
   printf("You have ordered %d order(s) of Lentil Soup\n", s);
   p=s *250;
   printf("your total is Rs%.2f\n\n", p);
   break;

   case 2:
   printf("You have ordered %d order(s) of Avocado toast with fried egg\n", s);
   p=s*350;
   printf("Your total is  Rs.%.2f\n\n", p);
   break;

   case 3:
   printf("You have ordered %d order(s) of Turkey wrap\n", s);
   p=s*400;
   printf("Your total is Rs.%.2f\n\n", p);
   break;

   case 4:
   printf("You have ordered %d order(s) of Cottage cheese with steamed broccoli\n", s);
   p=s*279;
   printf("Your total is Rs.%.2f\n\n", p);
   break;

   case 5:
   printf("You have ordered %d order(s) Chicken Fried Rice\n", s);
   p=s*300;
   printf("your total is Rs.%.2f\n\n", p);
   break;

   case 6:
   printf("You have ordered %d order(s) Lamb Chops\n", s);
   p=s *400;
   printf("your total is Rs.%.2f\n\n", p);
   break;


   case 7:
   printf("You have ordered %d order(s) Barbecue\n", s);
   p=s *450;
   printf("your total is Rs.%.2f\n\n", p);
   break;

   case 8:
   printf("You have ordered %d order(s) Lasagna\n", s);
   p=s *380;
   printf("your total is Rs.%.2f\n\n", p);
    break;

    case 9:
   printf("You have ordered %d order(s) Mutton Biryani\n", s);
   p=s *500;
   printf("your total is Rs.%.2f\n\n", p);
    break;

    case 10:
   printf("You have ordered %d order(s) Chicken Biryani\n", s);
   p=s *480;
   printf("your total is Rs.%.2f\n\n", p);
    break;

    case 11:
   printf("You have ordered %d order(s) Peas Pullao\n", s);
   p=s *415;
   printf("your total is Rs.%.2f\n\n", p);
    break;

    case 12:
   printf("You have ordered %d order(s) Blueberry Cheesecake\n", s);
   p=s *280;
   printf("your total is Rs.%.2f\n\n", p);
     break;

    case 13:
   printf("You have ordered %d order(s) Mushroom Pizza\n", s);
   p=s *295;
   printf("your total is Rs.%.2f\n\n", p);
     break;

    case 14:
   printf("You have ordered %d order(s) Cheese fries\n", s);
   p=s *185;
   printf("your total is Rs.%.2f\n\n", p);
     break;

    case 15:
   printf("You have ordered %d order(s)Shawarma\n", s);
   p=s *315;
   printf("your total is Rs.%.2f\n\n", p);
   break;

    case 16:
   printf("You have ordered %d order(s) Butter Chicken\n", s);
   p=s *299;
   printf("your total is Rs.%.2f\n\n", p);
   break;

   case 17:
   printf("You have ordered %d order(s) Chicken Tikka\n", s);
   p=s *280;
   printf("your total is Rs.%.2f\n\n", p);
   break;
   default:
   break;

}
x=p*1.13;
printf("Please pay your total(including GST and delivery charges) of Rs.%.2f\n\n",x);
printf("Thank you for ordering from 14th Avenue!\n");
printf("Have a nice day :)");

}
else{
    printf("Order cancelled.");

}
}
