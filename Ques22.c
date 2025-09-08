#include <stdio.h>

int main()
{
 float  costP, sellP, profit, loss;
 float profitPer, lossPer;
 printf("Enter Cost Price And Selling Price \n");
 scanf("%f %f", &costP, &sellP);

 if(costP > sellP)
 {
  loss = costP - sellP;
  lossPer = (loss / costP) * 100;
  printf("Loss %f",lossPer);
 }
 else if(costP < sellP)
 {
  profit = sellP - costP;
  profitPer = (profit / costP) * 100;
  printf("Profit %f", profitPer);
 }
 else
 {
  printf("No Profit No Loss \n");
 }
}
