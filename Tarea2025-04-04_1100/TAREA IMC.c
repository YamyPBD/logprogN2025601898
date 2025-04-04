int main ()
 {
     float PESO, ALTURA, IMC;
     printf ("INGRESA TU PESO EN KG: \n");
     scanf ("%f", &PESO);
     printf ("INGRESA TU ALTURA EN M: \n");
    scanf ("%f", &ALTURA);
     IMC= PESO/(ALTURA*ALTURA);
     printf("%f \n", IMC);

     if(IMC<=18.4){
        printf ("BAJO PESO");
        }else if (IMC>=18.5 && IMC<=24.9){
            printf ("PESO NORMAL");
             }else if (IMC>=25.0 && IMC<=29.9){
               printf ("SOBREPESO");
               }else if (IMC>=30.0 && IMC<=34.9){
                 printf ("OBECIDAD CLASE 1");
                 }else if (IMC>=35.0 && IMC<=39.9){
                 printf ("OBECIDAD CLASE 2");
                  }else if (IMC>=40.0){
                 printf ("OBECIDAD CLASE 2");
                  }



 return 0;
 }
