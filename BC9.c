#include <stdio.h>

int main()
{
   // WRITE/APPEND A FILE
   FILE *pF = fopen("created.txt", "r");

   fprintf(pF, "text");

   fclose(pF);
   
   // DELETE A FILE

   if(remove("created.txt") == 0)
   {
      printf("That file was deleted successfully!");
   }
   else
   {
      printf("That file was NOT/already deleted!");
   }
   
   return 0;
}