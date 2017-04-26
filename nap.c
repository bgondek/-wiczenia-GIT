 #include <stdio.h>
 #include <string.h>
 
 int main(void) {
   char napis1[80] = "hello ";
   const const char *napis2 = "world";
   strcat(napis1, napis2);
   puts(napis1);
   return 0;
 }