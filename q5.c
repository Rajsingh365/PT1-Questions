//WAP TO PRINT MULTIPLE OF 2 AND 3 FOR FIRST 20 NATURAL NUMBER. 
 #include<stdio.h> 
 #include<conio.h> 
 int main() { 
     for (int i = 1; i <= 20; i++) { 
         if ((i % 2 == 0) && (i % 3 == 0)) { 
             printf("%d ",i); 
         } 
     } 
     return 0; 
 }
